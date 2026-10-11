// from server: 90% by atomic.potato
// roc 2008-06 005ac1e0  unit: RBX::VScriptContext::?$FactoryProduct  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ac1e0
//
// 005ac1e0  53                   push ebx
// 005ac1e1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 005ac1e5  56                   push esi
// 005ac1e6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005ac1ea  57                   push edi
// 005ac1eb  53                   push ebx
// 005ac1ec  56                   push esi
// 005ac1ed  e82e5f0600           call 0x612120
// 005ac1f2  8bf8                 mov edi, eax
// 005ac1f4  83c408               add esp, 8
// 005ac1f7  85ff                 test edi, edi
// 005ac1f9  7460                 je 0x5ac25b
// 005ac1fb  53                   push ebx
// 005ac1fc  56                   push esi
// 005ac1fd  e8ae630600           call 0x6125b0
// 005ac202  83c408               add esp, 8
// 005ac205  85c0                 test eax, eax
// 005ac207  7447                 je 0x5ac250
// 005ac209  a1bcb19500           mov eax, dword ptr [0x95b1bc]
// 005ac20e  50                   push eax
// 005ac20f  68f0d8ffff           push 0xffffd8f0
// 005ac214  56                   push esi
// 005ac215  e876620600           call 0x612490
// 005ac21a  6afe                 push -2
// 005ac21c  6aff                 push -1
// 005ac21e  56                   push esi
// 005ac21f  e8bc5c0600           call 0x611ee0
// 005ac224  83c418               add esp, 0x18
// 005ac227  85c0                 test eax, eax
// 005ac229  7430                 je 0x5ac25b
// 005ac22b  6afd                 push -3
// 005ac22d  56                   push esi
// 005ac22e  e8ed590600           call 0x611c20
// 005ac233  83c408               add esp, 8
// 005ac236  e8050dfcff           call 0x56cf40
// 005ac23b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005ac23f  8901                 mov dword ptr [ecx], eax
// 005ac241  57                   push edi
// 005ac242  83c104               add ecx, 4
// 005ac245  e81610fcff           call 0x56d260
// 005ac24a  5f                   pop edi
// 005ac24b  5e                   pop esi
// 005ac24c  b001                 mov al, 1
// 005ac24e  5b                   pop ebx
// 005ac24f  c3                   ret 
// 005ac250  6afe                 push -2
// 005ac252  56                   push esi
// 005ac253  e8c8590600           call 0x611c20
// 005ac258  83c408               add esp, 8
// 005ac25b  5f                   pop edi
// 005ac25c  5e                   pop esi
// 005ac25d  32c0                 xor al, al
// 005ac25f  5b                   pop ebx
// 005ac260  c3                   ret 

extern "C" int __cdecl sub_612120(int, int);
extern "C" int __cdecl sub_6125B0(int, int);
extern "C" int __cdecl sub_612490(int, int, int);
extern "C" int __cdecl sub_611EE0(int, int, int);
extern "C" int __cdecl sub_611C20(int, int);
extern "C" int __cdecl sub_56CF40();
extern "C" void __cdecl sub_56D260(int*, int);

extern int dword_95B1BC;

struct S {
};

bool __cdecl f(int a, int b, int* out)
{
    int edi = sub_612120(a, b);
    if (edi == 0)
        return false;
    if (sub_6125B0(a, b) != 0) {
        sub_612490(a, -10000, dword_95B1BC);
        if (sub_611EE0(a, -1, -2) == 0)
            return false;
        sub_611C20(a, -3);
        *out = sub_56CF40();
        sub_56D260(out + 1, edi);
        return true;
    }
    sub_611C20(a, -2);
    return false;
}
