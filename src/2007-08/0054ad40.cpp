// from server: 24% by colin
// roc 2007-08 0054ad40  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054ad40
//
// 0054ad40  6aff                 push -1
// 0054ad42  6808247500           push 0x752408
// 0054ad47  64a100000000         mov eax, dword ptr fs:[0]
// 0054ad4d  50                   push eax
// 0054ad4e  64892500000000       mov dword ptr fs:[0], esp
// 0054ad55  51                   push ecx
// 0054ad56  56                   push esi
// 0054ad57  8bf1                 mov esi, ecx
// 0054ad59  89742404             mov dword ptr [esp + 4], esi
// 0054ad5d  6a00                 push 0
// 0054ad5f  6a01                 push 1
// 0054ad61  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0054ad69  e8d21c0800           call 0x5cca40
// 0054ad6e  8bce                 mov ecx, esi
// 0054ad70  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0054ad78  e8c3c31d00           call 0x727140
// 0054ad7d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0054ad81  5e                   pop esi
// 0054ad82  64890d00000000       mov dword ptr fs:[0], ecx
// 0054ad89  83c410               add esp, 0x10
// 0054ad8c  c3                   ret 

struct S {
    void f();
};

extern "C" void __stdcall sub_5cca40(int, int);
extern "C" void __stdcall sub_727140();

void S::f() {
    sub_5cca40(1, 0);
    sub_727140();
}
