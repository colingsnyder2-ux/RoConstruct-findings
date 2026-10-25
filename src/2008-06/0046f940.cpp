// from server: 100% by king_originala
// roc 2008-06 0046f940  unit: RBX::LDraw2Lua::LuaWriter  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046f940
//
// 0046f940  56                   push esi
// 0046f941  8bf1                 mov esi, ecx
// 0046f943  8b06                 mov eax, dword ptr [esi]
// 0046f945  83f8fc               cmp eax, -4
// 0046f948  7422                 je 0x46f96c
// 0046f94a  57                   push edi
// 0046f94b  8b3d90288000         mov edi, dword ptr [0x802890]
// 0046f951  85c0                 test eax, eax
// 0046f953  7502                 jne 0x46f957
// 0046f955  ffd7                 call edi
// 0046f957  8b0e                 mov ecx, dword ptr [esi]
// 0046f959  ff1558238000         call dword ptr [0x802358]
// 0046f95f  8b0e                 mov ecx, dword ptr [esi]
// 0046f961  034114               add eax, dword ptr [ecx + 0x14]
// 0046f964  394604               cmp dword ptr [esi + 4], eax
// 0046f967  7202                 jb 0x46f96b
// 0046f969  ffd7                 call edi
// 0046f96b  5f                   pop edi
// 0046f96c  8b4604               mov eax, dword ptr [esi + 4]
// 0046f96f  5e                   pop esi
// 0046f970  c3                   ret 

extern "C" void (__cdecl *invalid_parameter_noinfo)();

struct StringData {
    char storage[20];
    unsigned int length;
};

extern char *(__thiscall *string_myptr)(StringData *);

struct S {
    StringData *owner;
    char *position;
    char *f();
};

char *S::f()
{
    if (owner == reinterpret_cast<StringData *>(-4))
        goto done;

    {
        void (__cdecl *invalid)() = invalid_parameter_noinfo;
        if (!owner)
            invalid();
        char *end = string_myptr(owner) + owner->length;
        if (reinterpret_cast<unsigned int>(position) >=
            reinterpret_cast<unsigned int>(end))
            invalid();
    }

done:
    return position;
}
