// from server: 68% by colin
// roc 2007-08 00565990  unit: RBX::Verb  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00565990
//
// 00565990  56                   push esi
// 00565991  57                   push edi
// 00565992  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00565996  85ff                 test edi, edi
// 00565998  8bf1                 mov esi, ecx
// 0056599a  7e17                 jle 0x5659b3
// 0056599c  8d642400             lea esp, [esp]
// 005659a0  8b4610               mov eax, dword ptr [esi + 0x10]
// 005659a3  6a09                 push 9
// 005659a5  50                   push eax
// 005659a6  e89500feff           call 0x545a40
// 005659ab  83c408               add esp, 8
// 005659ae  83ef01               sub edi, 1
// 005659b1  75ed                 jne 0x5659a0
// 005659b3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005659b7  8b410c               mov eax, dword ptr [ecx + 0xc]
// 005659ba  8b5610               mov edx, dword ptr [esi + 0x10]
// 005659bd  6a3e                 push 0x3e
// 005659bf  83c004               add eax, 4
// 005659c2  50                   push eax
// 005659c3  6830967a00           push 0x7a9630
// 005659c8  52                   push edx
// 005659c9  e8d259f0ff           call 0x46b3a0
// 005659ce  83c408               add esp, 8
// 005659d1  50                   push eax
// 005659d2  ff1540e57700         call dword ptr [0x77e540]
// 005659d8  83c408               add esp, 8
// 005659db  50                   push eax
// 005659dc  e85f00feff           call 0x545a40
// 005659e1  83c408               add esp, 8
// 005659e4  5f                   pop edi
// 005659e5  5e                   pop esi
// 005659e6  c20800               ret 8

struct T_func_00565990 {
    char pad[0x10];
    void* field_10;
    void m(int a, int b);
};

extern "C" void __cdecl func_00545a40(void*, int);
extern "C" void* __cdecl func_0046b3a0(void*, const char*, void*);
extern "C" void* __stdcall func_0077e540(void*);

void T_func_00565990::m(int a, int b)
{
    int i = a;
    while (i > 0) {
        func_00545a40(field_10, 9);
        --i;
    }
    void* p = func_0046b3a0(field_10, "tag expected after Byte-Order-Mark:", (char*)b + 4);
    void* q = func_0077e540(p);
    func_00545a40(q, 0x3e);
}
