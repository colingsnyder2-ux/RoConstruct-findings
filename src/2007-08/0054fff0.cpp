// from server: 57% by colin
// roc 2007-08 0054fff0  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054fff0
//
// 0054fff0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0054fff4  83ec34               sub esp, 0x34
// 0054fff7  6a01                 push 1
// 0054fff9  8d442407             lea eax, [esp + 7]
// 0054fffd  50                   push eax
// 0054fffe  e8ade5ffff           call 0x54e5b0
// 00550003  83f801               cmp eax, 1
// 00550006  750f                 jne 0x550017
// 00550008  0fb6442403           movzx eax, byte ptr [esp + 3]
// 0055000d  83f8ff               cmp eax, -1
// 00550010  7405                 je 0x550017
// 00550012  83f8fe               cmp eax, -2
// 00550015  751d                 jne 0x550034
// 00550017  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0055001b  51                   push ecx
// 0055001c  8d4c2408             lea ecx, [esp + 8]
// 00550020  e86be0ffff           call 0x54e090
// 00550025  6814a48500           push 0x85a414
// 0055002a  8d542408             lea edx, [esp + 8]
// 0055002e  52                   push edx
// 0055002f  e86a0b0e00           call 0x630b9e
// 00550034  83c434               add esp, 0x34
// 00550037  c3                   ret 

struct T_func_0054fff0 {
    void m();
};

extern "C" int __stdcall sub_54e5b0(void*, int);
extern "C" void __stdcall sub_54e090(void*, int);
extern "C" void __cdecl sub_630b9e(void*, void*);

void T_func_0054fff0::m()
{
    char buf[4];
    int n = sub_54e5b0(buf, 1);
    if (n == 1) {
        char c = buf[0];
        if (c != 0xFF && c != 0xFE) {
            return;
        }
    }
    int arg = *(int*)((char*)this + 0x3C);
    sub_54e090(buf, arg);
    sub_630b9e((void*)0x85a414, buf);
}
