// from server: 88% by colin
// roc 2007-08 00434c20  unit: CMemberTreeView  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00434c20
//
// 00434c20  56                   push esi
// 00434c21  57                   push edi
// 00434c22  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00434c26  8b4704               mov eax, dword ptr [edi + 4]
// 00434c29  8bf1                 mov esi, ecx
// 00434c2b  8d4804               lea ecx, [eax + 4]
// 00434c2e  ff15a8e67700         call dword ptr [0x77e6a8]
// 00434c34  680200ffff           push 0xffff0002
// 00434c39  680000ffff           push 0xffff0000
// 00434c3e  6a00                 push 0
// 00434c40  6a00                 push 0
// 00434c42  6a00                 push 0
// 00434c44  6a0a                 push 0xa
// 00434c46  6a0a                 push 0xa
// 00434c48  50                   push eax
// 00434c49  6a23                 push 0x23
// 00434c4b  8bce                 mov ecx, esi
// 00434c4d  e8e2b91f00           call 0x630634
// 00434c52  57                   push edi
// 00434c53  6a00                 push 0
// 00434c55  6a00                 push 0
// 00434c57  6a00                 push 0
// 00434c59  6a00                 push 0
// 00434c5b  6a00                 push 0
// 00434c5d  6a04                 push 4
// 00434c5f  50                   push eax
// 00434c60  8bce                 mov ecx, esi
// 00434c62  e8d3b91f00           call 0x63063a
// 00434c67  5f                   pop edi
// 00434c68  5e                   pop esi
// 00434c69  c20400               ret 4

struct CMemberTreeView {
    void func_00434c20(void*);
};

extern "C" const char* __stdcall c_str_helper(void*);
extern "C" void* __stdcall func_00630634(void*, int, const char*, int, int, int, int, int, int, int);
extern "C" void* __stdcall func_0063063a(void*, void*, int, int, int, int, int, int, void*, int);

void CMemberTreeView::func_00434c20(void* arg)
{
    void* p = *(void**)((char*)arg + 4);
    const char* s = c_str_helper((char*)p + 4);
    void* r1 = func_00630634(this, 0x23, s, 0xa, 0xa, 0, 0, 0, 0xffff0000, 0xffff0002);
    func_0063063a(this, r1, 4, 0, 0, 0, 0, 0, arg, 0);
}
