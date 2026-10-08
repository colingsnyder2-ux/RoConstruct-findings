// from server: 100% by colin
// roc 2007-08 0054f220  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054f220
//
// 0054f220  56                   push esi
// 0054f221  8bf1                 mov esi, ecx
// 0054f223  807e4800             cmp byte ptr [esi + 0x48], 0
// 0054f227  7409                 je 0x54f232
// 0054f229  e832c7ffff           call 0x54b960
// 0054f22e  c6464800             mov byte ptr [esi + 0x48], 0
// 0054f232  5e                   pop esi
// 0054f233  c3                   ret 

struct S {
    char pad[0x48];
    char flag;
    void f();
};

extern "C" void __cdecl helper();

void S::f() {
    if (flag != 0) {
        helper();
        flag = 0;
    }
}
