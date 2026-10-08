// from server: 82% by colin
// roc 2007-08 0060b480  unit: CXTCaptionButtonTheme  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060b480
//
// 0060b480  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0060b484  8b4108               mov eax, dword ptr [ecx + 8]
// 0060b487  56                   push esi
// 0060b488  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0060b48b  8b4864               mov ecx, dword ptr [eax + 0x64]
// 0060b48e  8b5664               mov edx, dword ptr [esi + 0x64]
// 0060b491  394a08               cmp dword ptr [edx + 8], ecx
// 0060b494  7407                 je 0x60b49d
// 0060b496  395108               cmp dword ptr [ecx + 8], edx
// 0060b499  7513                 jne 0x60b4ae
// 0060b49b  8bc6                 mov eax, esi
// 0060b49d  85c0                 test eax, eax
// 0060b49f  740d                 je 0x60b4ae
// 0060b4a1  3b442408             cmp eax, dword ptr [esp + 8]
// 0060b4a5  7507                 jne 0x60b4ae
// 0060b4a7  b801000000           mov eax, 1
// 0060b4ac  5e                   pop esi
// 0060b4ad  c3                   ret 
// 0060b4ae  33c0                 xor eax, eax
// 0060b4b0  5e                   pop esi
// 0060b4b1  c3                   ret 

struct CXTCaptionButtonTheme
{
    char pad[8];
    void* field_8;
    void* field_c;
};

int __cdecl func_0060b480(CXTCaptionButtonTheme* self, void* arg)
{
    void* a = self->field_8;
    void* b = self->field_c;
    void* ca = *(void**)((char*)a + 0x64);
    void* cb = *(void**)((char*)b + 0x64);
    void* result;
    if (*(void**)((char*)cb + 8) == ca)
    {
        result = a;
    }
    else if (*(void**)((char*)ca + 8) == cb)
    {
        result = b;
    }
    else
    {
        return 0;
    }
    if (result == 0)
        return 0;
    if (result != arg)
        return 0;
    return 1;
}
