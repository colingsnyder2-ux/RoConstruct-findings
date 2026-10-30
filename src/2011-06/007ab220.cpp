// roc 2011-06 007ab220  unit: RBX::CornerWedgePoly  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007ab220
//
// 007ab220  8b442404             mov eax, dword ptr [esp + 4]
// 007ab224  83781810             cmp dword ptr [eax + 0x18], 0x10
// 007ab228  8b4814               mov ecx, dword ptr [eax + 0x14]
// 007ab22b  7205                 jb 0x7ab232
// 007ab22d  8b4004               mov eax, dword ptr [eax + 4]
// 007ab230  eb03                 jmp 0x7ab235
// 007ab232  83c004               add eax, 4
// 007ab235  51                   push ecx
// 007ab236  50                   push eax
// 007ab237  8d44240c             lea eax, [esp + 0xc]
// 007ab23b  50                   push eax
// 007ab23c  c744241000000000     mov dword ptr [esp + 0x10], 0
// 007ab244  e887ffffff           call 0x7ab1d0
// 007ab249  8b442410             mov eax, dword ptr [esp + 0x10]
// 007ab24d  83c40c               add esp, 0xc
// 007ab250  c3                   ret 
// copied from an identical function in another client (function ?sub_6d6e50@@YAHPBUStrData@@@Z)

// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD
struct StrData {
    int pad0;
    union {
        char buf[16];
        const char* ptr;
    } bx;
    unsigned int length;
    unsigned int capacity;
};

extern "C" void __cdecl sub_6d6e00(int* out, const char* data, unsigned int size);

int sub_6d6e50(const StrData* s) {
    unsigned int len = s->length;
    const char* data;
    if (s->capacity >= 16) {
        data = s->bx.ptr;
    } else {
        data = (const char*)&s->bx;
    }
    int result = 0;
    sub_6d6e00(&result, data, len);
    return result;
}