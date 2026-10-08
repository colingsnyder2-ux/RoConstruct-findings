// from server: 76% by colin
// roc 2007-08 00429770  unit: ThreadLogManager  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00429770
//
// 00429770  8b442408             mov eax, dword ptr [esp + 8]
// 00429774  83f802               cmp eax, 2
// 00429777  7519                 jne 0x429792
// 00429779  56                   push esi
// 0042977a  8b742408             mov esi, dword ptr [esp + 8]
// 0042977e  56                   push esi
// 0042977f  b9c0648800           mov ecx, 0x8864c0
// 00429784  ff1508e77700         call dword ptr [0x77e708]
// 0042978a  f6d8                 neg al
// 0042978c  1bc0                 sbb eax, eax
// 0042978e  23c6                 and eax, esi
// 00429790  5e                   pop esi
// 00429791  c3                   ret 
// 00429792  8b542404             mov edx, dword ptr [esp + 4]
// 00429796  c644240800           mov byte ptr [esp + 8], 0
// 0042979b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0042979f  51                   push ecx
// 004297a0  50                   push eax
// 004297a1  52                   push edx
// 004297a2  e8a9feffff           call 0x429650
// 004297a7  83c40c               add esp, 0xc
// 004297aa  c3                   ret 

struct type_info {
    bool operator==(const type_info&) const;
};

extern "C" void* __stdcall sub_429650(void*, int, int);

int __fastcall sub_429770(void* self, int, int arg2, int arg1)
{
    if (arg2 == 2) {
        int v = arg1;
        if (*(const type_info*)0x8864c0 == *(const type_info*)v) {
            return v;
        }
        return 0;
    }
    char local = 0;
    sub_429650((void*)arg1, arg2, *(int*)&local);
    return 0;
}
