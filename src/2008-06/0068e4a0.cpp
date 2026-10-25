// from server: 100% by king_originala
// roc 2008-06 0068e4a0  unit: Ogre::VRbxSky::?$SharedPtr  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068e4a0
//
// 0068e4a0  53                   push ebx
// 0068e4a1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0068e4a5  57                   push edi
// 0068e4a6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0068e4aa  2bfb                 sub edi, ebx
// 0068e4ac  c1ff02               sar edi, 2
// 0068e4af  85ff                 test edi, edi
// 0068e4b1  7e41                 jle 0x68e4f4
// 0068e4b3  55                   push ebp
// 0068e4b4  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0068e4b8  56                   push esi
// 0068e4b9  8da42400000000       lea esp, [esp]
// 0068e4c0  8b4d00               mov ecx, dword ptr [ebp]
// 0068e4c3  8bc7                 mov eax, edi
// 0068e4c5  99                   cdq 
// 0068e4c6  2bc2                 sub eax, edx
// 0068e4c8  8bf0                 mov esi, eax
// 0068e4ca  d1fe                 sar esi, 1
// 0068e4cc  8b04b3               mov eax, dword ptr [ebx + esi*4]
// 0068e4cf  50                   push eax
// 0068e4d0  51                   push ecx
// 0068e4d1  8d4c2428             lea ecx, [esp + 0x28]
// 0068e4d5  ff15dc488000         call dword ptr [0x8048dc]
// 0068e4db  84c0                 test al, al
// 0068e4dd  750d                 jne 0x68e4ec
// 0068e4df  83caff               or edx, 0xffffffff
// 0068e4e2  2bd6                 sub edx, esi
// 0068e4e4  8d5cb304             lea ebx, [ebx + esi*4 + 4]
// 0068e4e8  03fa                 add edi, edx
// 0068e4ea  eb02                 jmp 0x68e4ee
// 0068e4ec  8bfe                 mov edi, esi
// 0068e4ee  85ff                 test edi, edi
// 0068e4f0  7fce                 jg 0x68e4c0
// 0068e4f2  5e                   pop esi
// 0068e4f3  5d                   pop ebp
// 0068e4f4  5f                   pop edi
// 0068e4f5  8bc3                 mov eax, ebx
// 0068e4f7  5b                   pop ebx
// 0068e4f8  c3                   ret 

struct Light;
struct Comparator {};

typedef bool (__thiscall *CompareFunction)(
    const Comparator *, const Light *, const Light *);

extern CompareFunction lightLess;

Light **upperBound(
    Light **first,
    Light **last,
    Light *const &value,
    Comparator comp)
{
    int count = last - first;
    while (count > 0) {
        int half = count / 2;
        if (!lightLess(&comp, value, first[half])) {
            first += half + 1;
            count -= half + 1;
        } else {
            count = half;
        }
    }
    return first;
}
