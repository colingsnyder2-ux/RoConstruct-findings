// from server: 26% by colin
// roc 2007-08 0042d990  unit: boost::any::_N::?$holder  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042d990

extern "C" void __cdecl sub_42D700(void*, void*);

void __stdcall sub_42D990(void* dst_begin, void* src_begin, void* dst_end)
{
    char* dst = (char*)dst_begin;
    char* src = (char*)src_begin;
    char* end = (char*)dst_end;
    while (src != end)
    {
        sub_42D700(dst, src);
        dst += 8;
        src += 8;
    }
}
