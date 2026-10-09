// roc 2007-03 004187a0  unit: seg_00410000  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004187a0
//
// 004187a0  8b442408             mov eax, dword ptr [esp + 8]
// 004187a4  83f802               cmp eax, 2
// 004187a7  7519                 jne 0x4187c2
// 004187a9  56                   push esi
// 004187aa  8b742408             mov esi, dword ptr [esp + 8]
// 004187ae  56                   push esi
// 004187af  b948298800           mov ecx, 0x882948
// 004187b4  ff1574e97700         call dword ptr [0x77e974]
// 004187ba  f6d8                 neg al
// 004187bc  1bc0                 sbb eax, eax
// 004187be  23c6                 and eax, esi
// 004187c0  5e                   pop esi
// 004187c1  c3                   ret 
// 004187c2  85c0                 test eax, eax
// 004187c4  7517                 jne 0x4187dd
// 004187c6  6a01                 push 1
// 004187c8  e83b592000           call 0x61e108
// 004187cd  83c404               add esp, 4
// 004187d0  85c0                 test eax, eax
// 004187d2  7418                 je 0x4187ec
// 004187d4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004187d8  8a11                 mov dl, byte ptr [ecx]
// 004187da  8810                 mov byte ptr [eax], dl
// 004187dc  c3                   ret 
// 004187dd  8b442404             mov eax, dword ptr [esp + 4]
// 004187e1  50                   push eax
// 004187e2  e809592000           call 0x61e0f0
// 004187e7  83c404               add esp, 4
// 004187ea  33c0                 xor eax, eax
// 004187ec  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000004@ns_ROCX000004@@YAHHH@Z)

namespace ns_ROCX000004 {
extern "C" int __cdecl fn_ROCX000004(int);
extern "C" int __cdecl fn_ROCX000004(int);

struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

extern type_info type_info_00883790;
extern bool (__thiscall* ptr_0077e708)(const type_info*, const type_info*);

int __cdecl fn_ROCX000004(int a, int b)
{
    if (b == 2) {
        int v = a;
        bool r = ptr_0077e708(&type_info_00883790, (const type_info*)v);
        return r ? v : 0;
    }
    if (b == 0) {
        int p = fn_ROCX000004(1);
        if (p != 0)
            *(char*)p = *(char*)a;
        return p;
    }
    fn_ROCX000004(a);
    return 0;
}
}
