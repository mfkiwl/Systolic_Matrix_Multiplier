lab4:
	python make_mem.py 6 3
	vivado -mode tcl -source script.tcl
	python test.py 3 b
	
clean:
	rm -rf *.log *.jou ./EE116_lab4