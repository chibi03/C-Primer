//C++ Reading Group - Class3 - 30/01/14
/*
In C++ the object will be created on the stack even though you haven't done 'new Object'. Similar to primitives in Java.
The "stack" is a local working space, with a finite space.
The "heap" is a dynamic area, which is used for memory allocation in runtime. Pointers will reference towards the heap, these pointers have to be deleted at some point as they
will otherwise cause a memory leak (there is no garbage collection.

It is common practice to put variables on the local stack.

The compiler has a set of methods it'll create for each Object, some of these methods are "constructor" & "deconstructor". 


Cin / cout is very common for example programs but cin itself might not be used that much in real life. Redirected cin / cout is pretty common tough it'll 
output into files.


The kleene star next to a type indcates that it is a pointer, so you need to initialise it then or it well be == null. Which is not the case when it is put on the stack.


*/