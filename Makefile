BUILD = ./build/
INSTALL_DIR = /usr/local/bin/

agf: clean
	$(shell mkdir $(BUILD))
	gcc girlfriend.c -o $(BUILD)girlfriend

.PHNONY: run
run: agf
	$(BUILD)/girlfriend

.PHNONY: install
install: agf
	sudo install -v $(BUILD)girlfriend $(INSTALL_DIR)

.PHNONY: clean
clean:
	-rm -rf $(BUILD)

.PHNONY: uninstall
uninstall:
	-sudo rm -rf $(INSTALL_DIR)/girlfriend