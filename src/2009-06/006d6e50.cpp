// from server: 100% by atomic.potato
// roc 2009-06 006d6e50  unit: RBX::MotorJoint  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006d6e50
//
// 006d6e50  8b442404             mov eax, dword ptr [esp + 4]
// 006d6e54  83781810             cmp dword ptr [eax + 0x18], 0x10
// 006d6e58  8b4814               mov ecx, dword ptr [eax + 0x14]
// 006d6e5b  7205                 jb 0x6d6e62
// 006d6e5d  8b4004               mov eax, dword ptr [eax + 4]
// 006d6e60  eb03                 jmp 0x6d6e65
// 006d6e62  83c004               add eax, 4
// 006d6e65  51                   push ecx
// 006d6e66  50                   push eax
// 006d6e67  8d44240c             lea eax, [esp + 0xc]
// 006d6e6b  50                   push eax
// 006d6e6c  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006d6e74  e887ffffff           call 0x6d6e00
// 006d6e79  8b442410             mov eax, dword ptr [esp + 0x10]
// 006d6e7d  83c40c               add esp, 0xc
// 006d6e80  c3                   ret 

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
