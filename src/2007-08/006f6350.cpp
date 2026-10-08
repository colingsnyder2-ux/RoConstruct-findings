// from server: 66% by colin
// roc 2007-08 006f6350  unit: CXTPPropertyGridInplaceEdit  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f6350
//
// 006f6350  8bc1                 mov eax, ecx
// 006f6352  83b8a800000000       cmp dword ptr [eax + 0xa8], 0
// 006f6359  741b                 je 0x6f6376
// 006f635b  83b8a000000000       cmp dword ptr [eax + 0xa0], 0
// 006f6362  7412                 je 0x6f6376
// 006f6364  8b889c000000         mov ecx, dword ptr [eax + 0x9c]
// 006f636a  85c9                 test ecx, ecx
// 006f636c  7408                 je 0x6f6376
// 006f636e  50                   push eax
// 006f636f  6a04                 push 4
// 006f6371  e87a47faff           call 0x69aaf0
// 006f6376  c3                   ret 

struct CXTPPropertyGridInplaceEdit {
    char pad[0x9c];
    int field_9c;
    int field_a0;
    int field_a4;
    int field_a8;
    void Method();
};

extern "C" void __stdcall sub_69aaf0(void*, int);

void CXTPPropertyGridInplaceEdit::Method()
{
    if (field_a8 != 0 && field_a0 != 0 && field_9c != 0)
        sub_69aaf0(this, 4);
}
