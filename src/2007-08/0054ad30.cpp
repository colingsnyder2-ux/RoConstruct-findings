// from server: 100% by colin
// roc 2007-08 0054ad30  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054ad30
//
// 0054ad30  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0054ad33  c1e804               shr eax, 4
// 0054ad36  83e001               and eax, 1
// 0054ad39  c3                   ret 

struct S {
    unsigned int pad[21];
    unsigned int field;
    unsigned int f();
};

unsigned int S::f() {
    return (this->field >> 4) & 1;
}
