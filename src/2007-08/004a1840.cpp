// from server: 57% by colin
// roc 2007-08 004a1840  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a1840
//
// 004a1840  83ec0c               sub esp, 0xc
// 004a1843  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004a1847  8d442408             lea eax, [esp + 8]
// 004a184b  50                   push eax
// 004a184c  e8dffeffff           call 0x4a1730
// 004a1851  8b08                 mov ecx, dword ptr [eax]
// 004a1853  890c24               mov dword ptr [esp], ecx
// 004a1856  8d0c24               lea ecx, [esp]
// 004a1859  e8c24d0e00           call 0x586620
// 004a185e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004a1862  6a01                 push 1
// 004a1864  6a05                 push 5
// 004a1866  8d54240c             lea edx, [esp + 0xc]
// 004a186a  52                   push edx
// 004a186b  89442410             mov dword ptr [esp + 0x10], eax
// 004a186f  e81ce5ffff           call 0x49fd90
// 004a1874  83c40c               add esp, 0xc
// 004a1877  c3                   ret 

struct BoundFuncDesc {
    void construct(int a, int b, int c);
};

extern "C" void __cdecl sub_4A1730(void* out, int arg);
extern "C" void __cdecl sub_586620(void* p);
extern "C" void __cdecl sub_49FD90(void* p, int a, int b, int c);

void BoundFuncDesc::construct(int a, int b, int c)
{
    int tmp;
    sub_4A1730(&tmp, a);
    int v = *(int*)&tmp;
    sub_586620(&v);
    sub_49FD90(&v, c, 5, 1);
}
