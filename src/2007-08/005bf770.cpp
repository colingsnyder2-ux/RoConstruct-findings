// from server: 100% by colin
// roc 2007-08 005bf770  unit: boost::detail::H::?$sp_counted_impl_p  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bf770
//
// 005bf770  8b4908               mov ecx, dword ptr [ecx + 8]
// 005bf773  85c9                 test ecx, ecx
// 005bf775  7408                 je 0x5bf77f
// 005bf777  8b01                 mov eax, dword ptr [ecx]
// 005bf779  8b10                 mov edx, dword ptr [eax]
// 005bf77b  6a01                 push 1
// 005bf77d  ffd2                 call edx
// 005bf77f  c3                   ret 

struct sp_counted_base {
    virtual void dispose(int);
};

struct sp_counted_impl_p {
    void dispose();
};

void sp_counted_impl_p::dispose()
{
    sp_counted_base* p = *(sp_counted_base**)((char*)this + 8);
    if (p)
        p->dispose(1);
}
