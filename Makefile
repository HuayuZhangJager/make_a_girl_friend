BUILD = ./build

agf: clean
	$(shell mkdir $(BUILD))
	gcc girlfriend.c -o $(BUILD)/girlfriend

.PHNONY: run
run: agf
	$(BUILD)/girlfriend

.PHNONY: install
install: agf
	sudo install -v $(BUILD)/girlfriend /usr/local/bin/

.PHNONY: clean
clean:
	-rm -rf $(BUILD)