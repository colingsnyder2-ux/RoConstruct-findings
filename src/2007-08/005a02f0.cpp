// from server: 63% by colin
// roc 2007-08 005a02f0  unit: seg_005a0000  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a02f0
//
// 005a02f0  8b442408             mov eax, dword ptr [esp + 8]
// 005a02f4  83f802               cmp eax, 2
// 005a02f7  7519                 jne 0x5a0312
// 005a02f9  56                   push esi
// 005a02fa  8b742408             mov esi, dword ptr [esp + 8]
// 005a02fe  56                   push esi
// 005a02ff  b9e8768a00           mov ecx, 0x8a76e8
// 005a0304  ff1508e77700         call dword ptr [0x77e708]
// 005a030a  f6d8                 neg al
// 005a030c  1bc0                 sbb eax, eax
// 005a030e  23c6                 and eax, esi
// 005a0310  5e                   pop esi
// 005a0311  c3                   ret 
// 005a0312  8b542404             mov edx, dword ptr [esp + 4]
// 005a0316  c644240800           mov byte ptr [esp + 8], 0
// 005a031b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a031f  51                   push ecx
// 005a0320  50                   push eax
// 005a0321  52                   push edx
// 005a0322  e8d9220300           call 0x5d2600
// 005a0327  83c40c               add esp, 0xc
// 005a032a  c3                   ret 

// roc-lang: cpp
// roc-cl: 50727

extern "C" {
typedef struct type_info type_info;
}

extern "C" unsigned char __stdcall type_info_equal(const type_info *self, const type_info *rhs);

extern "C" int __cdecl sub_5d2600(void *a, int b, unsigned char c);

struct RBX_P8ModelInstance_GetSetImpl {
    int GetSetImpl(void *a, int b, int c);
};

int RBX_P8ModelInstance_GetSetImpl::GetSetImpl(void *a, int b, int c)
{
    if (c == 2) {
        int v = (int)a;
        unsigned char r = type_info_equal((const type_info *)0x8a76e8, (const type_info *)v);
        return (int)(-(signed char)r) & v;
    }
    return sub_5d2600(a, b, 0);
}
