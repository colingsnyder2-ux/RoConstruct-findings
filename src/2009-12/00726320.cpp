// roc 2009-12 00726320  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00726320
//
// 00726320  f681b000000001       test byte ptr [ecx + 0xb0], 1
// 00726327  7424                 je 0x72634d
// 00726329  8b89a0000000         mov ecx, dword ptr [ecx + 0xa0]
// 0072632f  85c9                 test ecx, ecx
// 00726331  741a                 je 0x72634d
// 00726333  8b442404             mov eax, dword ptr [esp + 4]
// 00726337  50                   push eax
// 00726338  8d542408             lea edx, [esp + 8]
// 0072633c  52                   push edx
// 0072633d  ff15f4b39800         call dword ptr [0x98b3f4]
// 00726343  8d4c2404             lea ecx, [esp + 4]
// 00726347  ff15fcb49800         call dword ptr [0x98b4fc]
// 0072634d  c20400               ret 4
// copied from an identical function in another client (function ?f@S@@QAEXPBX@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct Stream;

extern void (__thiscall *imbue)(Stream*, void*, const void*);
extern void (__thiscall *destroyLocale)(void*);

struct S {
    char padding[160];
    Stream* stream;
    char reserved[12];
    unsigned char flags;

    void f(const void* locale);
};

void S::f(const void* locale)
{
    if ((flags & 1) && stream) {
        imbue(stream, &locale, locale);
        destroyLocale(&locale);
    }
}