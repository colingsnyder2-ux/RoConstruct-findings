// roc 2009-12 007b41e0  unit: RBX::MotorJoint  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007b41e0
//
// 007b41e0  8b442404             mov eax, dword ptr [esp + 4]
// 007b41e4  83781810             cmp dword ptr [eax + 0x18], 0x10
// 007b41e8  8b4814               mov ecx, dword ptr [eax + 0x14]
// 007b41eb  7205                 jb 0x7b41f2
// 007b41ed  8b4004               mov eax, dword ptr [eax + 4]
// 007b41f0  eb03                 jmp 0x7b41f5
// 007b41f2  83c004               add eax, 4
// 007b41f5  51                   push ecx
// 007b41f6  50                   push eax
// 007b41f7  8d44240c             lea eax, [esp + 0xc]
// 007b41fb  50                   push eax
// 007b41fc  c744241000000000     mov dword ptr [esp + 0x10], 0
// 007b4204  e887ffffff           call 0x7b4190
// 007b4209  8b442410             mov eax, dword ptr [esp + 0x10]
// 007b420d  83c40c               add esp, 0xc
// 007b4210  c3                   ret 
// copied from an identical function in another client (function ?sub_6d6e50@ns_ROCX000000@@YAHPBUStrData@1@@Z)

namespace ns_ROCX000000 {
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
