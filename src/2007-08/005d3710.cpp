// from server: 31% by colin
// roc 2007-08 005d3710  unit: RBX::Tool  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d3710
//
// 005d3710  c70000000000         mov dword ptr [eax], 0
// 005d3716  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005d371e  89642430             mov dword ptr [esp + 0x30], esp
// 005d3722  8911                 mov dword ptr [ecx], edx
// 005d3724  8b542420             mov edx, dword ptr [esp + 0x20]
// 005d3728  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005d372c  52                   push edx
// 005d372d  50                   push eax
// 005d372e  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005d3733  e828d6fbff           call 0x590d60
// 005d3738  50                   push eax
// 005d3739  8bce                 mov ecx, esi
// 005d373b  c644242000           mov byte ptr [esp + 0x20], 0
// 005d3740  e88bd7f5ff           call 0x530ed0
// 005d3745  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005d3749  51                   push ecx
// 005d374a  e813c50500           call 0x62fc62
// 005d374f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d3753  83c404               add esp, 4
// 005d3756  c706fcb27b00         mov dword ptr [esi], 0x7bb2fc
// 005d375c  8bc6                 mov eax, esi
// 005d375e  64890d00000000       mov dword ptr fs:[0], ecx
// 005d3765  5e                   pop esi
// 005d3766  83c40c               add esp, 0xc
// 005d3769  c22400               ret 0x24

struct S {
    void m(int a, int b, int c, int d, int e, int f, int g, int h, int i);
};

struct T {
    void f(int);
};

extern "C" int __cdecl f_590d60(int, int);
extern "C" void __cdecl f_62fc62(int);

void S::m(int a, int b, int c, int d, int e, int f, int g, int h, int i)
{
    *(int*)0 = 0;
    *(int*)(this) = 0;
    ((T*)this)->f(f_590d60(g, h));
    f_62fc62(i);
    *(int*)this = 0x7bb2fc;
}
