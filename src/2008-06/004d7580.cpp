// from server: 100% by colin
// roc 2008-06 004d7580  unit: Ogre::VDataStream::?$SharedPtr  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d7580
//
// 004d7580  68702a5000           push 0x502a70
// 004d7585  6a04                 push 4
// 004d7587  6a04                 push 4
// 004d7589  51                   push ecx
// 004d758a  e8cca01c00           call 0x6a165b
// 004d758f  c3                   ret 

// from server: 68% by colin
extern "C" void __stdcall G1_func_006a165b(void*, int, int, void*);
extern "C" void func_00502a70();

struct S {
    void f();
};

void S::f()
{
    G1_func_006a165b(this, 4, 4, (void*)func_00502a70);
}
