all:
	@$(MAKE) -C Server
	@$(MAKE) -C Client
clean:
	@$(MAKE) -C Server clean 
	@$(MAKE) -C Client clean
runs:
	./server 5551
runc:
	./client 127.0.0.1 5551