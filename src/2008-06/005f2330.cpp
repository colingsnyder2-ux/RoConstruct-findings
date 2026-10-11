// from server: 100% by colin
// roc 2008-06 005f2330  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f2330
//
// 005f2330  8b4154               mov eax, dword ptr [ecx + 0x54]
// 005f2333  c1e804               shr eax, 4
// 005f2336  83e001               and eax, 1
// 005f2339  c3                   ret 

struct S {
    int f();
};

int S::f()
{
    return (*(unsigned int*)((char*)this + 0x54) >> 4) & 1;
}
