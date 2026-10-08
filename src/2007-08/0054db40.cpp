// from server: 100% by colin
// roc 2007-08 0054db40  unit: boost::iostreams::DUinput::V?$basic_null_device::?$stream_buffer  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054db40
//
// 0054db40  56                   push esi
// 0054db41  8bf1                 mov esi, ecx
// 0054db43  807e5800             cmp byte ptr [esi + 0x58], 0
// 0054db47  7409                 je 0x54db52
// 0054db49  e812deffff           call 0x54b960
// 0054db4e  c6465800             mov byte ptr [esi + 0x58], 0
// 0054db52  5e                   pop esi
// 0054db53  c3                   ret 

struct S {
    char pad[0x58];
    char flag;
    void sub_54b960();
    void f();
};

void S::f()
{
    if (flag != 0) {
        sub_54b960();
        flag = 0;
    }
}
