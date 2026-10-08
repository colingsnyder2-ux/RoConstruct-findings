// from server: 64% by colin
// roc 2007-08 0054e570  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054e570
//
// 0054e570  51                   push ecx
// 0054e571  8b01                 mov eax, dword ptr [ecx]
// 0054e573  53                   push ebx
// 0054e574  8b581c               mov ebx, dword ptr [eax + 0x1c]
// 0054e577  56                   push esi
// 0054e578  8b742410             mov esi, dword ptr [esp + 0x10]
// 0054e57c  57                   push edi
// 0054e57d  8b7820               mov edi, dword ptr [eax + 0x20]
// 0054e580  6a00                 push 0
// 0054e582  6a00                 push 0
// 0054e584  8bce                 mov ecx, esi
// 0054e586  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0054e58e  ff1554e57700         call dword ptr [0x77e554]
// 0054e594  8b442414             mov eax, dword ptr [esp + 0x14]
// 0054e598  50                   push eax
// 0054e599  57                   push edi
// 0054e59a  53                   push ebx
// 0054e59b  8bce                 mov ecx, esi
// 0054e59d  e82efdffff           call 0x54e2d0
// 0054e5a2  5f                   pop edi
// 0054e5a3  8bc6                 mov eax, esi
// 0054e5a5  5e                   pop esi
// 0054e5a6  5b                   pop ebx
// 0054e5a7  59                   pop ecx
// 0054e5a8  c20400               ret 4

struct S {
    S* f(int);
};

extern "C" void __stdcall g1(void*, int, int);
extern "C" void __stdcall g2(void*, int, int);

S* S::f(int a)
{
    int v = 0;
    int b = *(int*)(*(int*)this + 0x1c);
    int c = *(int*)(*(int*)this + 0x20);
    g1((void*)a, 0, 0);
    g2((void*)a, b, c);
    return (S*)a;
}
