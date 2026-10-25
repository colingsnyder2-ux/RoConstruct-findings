// from server: 100% by atomic.potato
// roc 2010-06 006c76f0  unit: rbx::Vspin_mutex::?$sp_counted_impl_p  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006c76f0
//
// 006c76f0  8b410c               mov eax, dword ptr [ecx + 0xc]
// 006c76f3  85c0                 test eax, eax
// 006c76f5  7407                 je 0x6c76fe
// 006c76f7  50                   push eax
// 006c76f8  e89d020e00           call 0x7a799a
// 006c76fd  59                   pop ecx
// 006c76fe  c3                   ret 

extern "C" void __cdecl sub_7a799a(int);

struct S
{
    char pad[12];
    int value;
    void release();
};

void S::release()
{
    if (value)
    {
        sub_7a799a(value);
    }
}
