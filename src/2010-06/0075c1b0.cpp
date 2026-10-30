// roc 2010-06 0075c1b0  unit: RBX::RightAngleRampPoly  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0075c1b0
//
// 0075c1b0  8b442404             mov eax, dword ptr [esp + 4]
// 0075c1b4  83781810             cmp dword ptr [eax + 0x18], 0x10
// 0075c1b8  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0075c1bb  7205                 jb 0x75c1c2
// 0075c1bd  8b4004               mov eax, dword ptr [eax + 4]
// 0075c1c0  eb03                 jmp 0x75c1c5
// 0075c1c2  83c004               add eax, 4
// 0075c1c5  51                   push ecx
// 0075c1c6  50                   push eax
// 0075c1c7  8d44240c             lea eax, [esp + 0xc]
// 0075c1cb  50                   push eax
// 0075c1cc  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0075c1d4  e887ffffff           call 0x75c160
// 0075c1d9  8b442410             mov eax, dword ptr [esp + 0x10]
// 0075c1dd  83c40c               add esp, 0xc
// 0075c1e0  c3                   ret 
// copied from an identical function in another client (function ?sub_6d6e50@ns_ROCX000005@@YAHPBUStrData@1@@Z)

namespace ns_ROCX000005 {
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
}
