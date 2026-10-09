// from server: 56% by colin
// roc 2007-08 005beed0  unit: boost::detail::H::?$sp_counted_impl_p  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005beed0
//
// 005beed0  53                   push ebx
// 005beed1  ff1550e87700         call dword ptr [0x77e850]
// 005beed7  8b00                 mov eax, dword ptr [eax]
// 005beed9  50                   push eax
// 005beeda  ff1540e87700         call dword ptr [0x77e840]
// 005beee0  6a00                 push 0
// 005beee2  57                   push edi
// 005beee3  56                   push esi
// 005beee4  8bd8                 mov ebx, eax
// 005beee6  e895eaffff           call 0x5bd980
// 005beeeb  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005beeef  53                   push ebx
// 005beef0  83c001               add eax, 1
// 005beef3  50                   push eax
// 005beef4  51                   push ecx
// 005beef5  68a0907b00           push 0x7b90a0
// 005beefa  56                   push esi
// 005beefb  e890edffff           call 0x5bdc90
// 005bef00  57                   push edi
// 005bef01  56                   push esi
// 005bef02  e8d9e6ffff           call 0x5bd5e0
// 005bef07  83c42c               add esp, 0x2c
// 005bef0a  b806000000           mov eax, 6
// 005bef0f  5b                   pop ebx
// 005bef10  c3                   ret 

extern "C" __declspec(dllimport) unsigned long __stdcall GetLastError();
extern "C" __declspec(dllimport) char* __stdcall strerror(int);
extern "C" int __cdecl _errno();

extern char G_7b90a0;

int __cdecl sub_5bd980(int, int, int);
int __cdecl sub_5bdc90(int, int, int, int, int, int);
int __cdecl sub_5bd5e0(int, int);

int __cdecl func_005beed0(int a, int b, int c)
{
    unsigned long e = GetLastError();
    char* msg = strerror(*(int*)_errno());
    int len = sub_5bd980(0, c, b);
    sub_5bdc90(a, (int)&G_7b90a0, len + 1, (int)msg, b, c);
    sub_5bd5e0(b, c);
    return 6;
}
