// from server: 90% by colin
// roc 2007-08 00673800  unit: CXTPCustomizeSheet  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00673800
//
// 00673800  8b442404             mov eax, dword ptr [esp + 4]
// 00673804  8d905ddcffff         lea edx, [eax - 0x23a3]
// 0067380a  83fa0b               cmp edx, 0xb
// 0067380d  7709                 ja 0x673818
// 0067380f  89442404             mov dword ptr [esp + 4], eax
// 00673813  e9184f0c00           jmp 0x738730
// 00673818  8b542408             mov edx, dword ptr [esp + 8]
// 0067381c  85d2                 test edx, edx
// 0067381e  7520                 jne 0x673840
// 00673820  83f802               cmp eax, 2
// 00673823  740a                 je 0x67382f
// 00673825  83f801               cmp eax, 1
// 00673828  7405                 je 0x67382f
// 0067382a  83f809               cmp eax, 9
// 0067382d  7511                 jne 0x673840
// 0067382f  c744240800000000     mov dword ptr [esp + 8], 0
// 00673837  89442404             mov dword ptr [esp + 4], eax
// 0067383b  e9f04e0c00           jmp 0x738730
// 00673840  8b89b8000000         mov ecx, dword ptr [ecx + 0xb8]
// 00673846  8b89a0000000         mov ecx, dword ptr [ecx + 0xa0]
// 0067384c  56                   push esi
// 0067384d  8b31                 mov esi, dword ptr [ecx]
// 0067384f  57                   push edi
// 00673850  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00673854  57                   push edi
// 00673855  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00673859  57                   push edi
// 0067385a  52                   push edx
// 0067385b  8b5614               mov edx, dword ptr [esi + 0x14]
// 0067385e  50                   push eax
// 0067385f  ffd2                 call edx
// 00673861  5f                   pop edi
// 00673862  5e                   pop esi
// 00673863  c21000               ret 0x10

struct CXTPCustomizeSheet {
    char pad[0xb8];
    struct Inner* p;
    int Method(int, int, int, int);
};

struct Inner {
    char pad[0xa0];
    struct Vtbl* vt;
};

struct Vtbl {
    char pad[0x14];
    int (__stdcall* fn)(int, int, int, int);
};

extern "C" int __stdcall sub_738730(int, int, int, int);

int CXTPCustomizeSheet::Method(int a, int b, int c, int d) {
    int v = a - 0x23a3;
    if ((unsigned)v <= 0xb) {
        return sub_738730(a, b, c, d);
    }
    if (b == 0) {
        if (a == 2 || a == 1 || a == 9) {
            return sub_738730(a, 0, c, d);
        }
    }
    Inner* p = *(Inner**)((char*)this + 0xb8);
    Vtbl* vt = *(Vtbl**)((char*)p + 0xa0);
    return vt->fn(a, b, c, d);
}
