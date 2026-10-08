// from server: 71% by colin
// roc 2007-08 006f6560  unit: VCEdit::?$CXTMaskEditT  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f6560
//
// 006f6560  53                   push ebx
// 006f6561  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006f6565  0fbec3               movsx eax, bl
// 006f6568  56                   push esi
// 006f6569  50                   push eax
// 006f656a  8bf1                 mov esi, ecx
// 006f656c  ff154ce77700         call dword ptr [0x77e74c]
// 006f6572  83c404               add esp, 4
// 006f6575  85c0                 test eax, eax
// 006f6577  7516                 jne 0x6f658f
// 006f6579  8b16                 mov edx, dword ptr [esi]
// 006f657b  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 006f6581  53                   push ebx
// 006f6582  8bce                 mov ecx, esi
// 006f6584  ffd0                 call eax
// 006f6586  85c0                 test eax, eax
// 006f6588  7505                 jne 0x6f658f
// 006f658a  5e                   pop esi
// 006f658b  5b                   pop ebx
// 006f658c  c20400               ret 4
// 006f658f  5e                   pop esi
// 006f6590  b801000000           mov eax, 1
// 006f6595  5b                   pop ebx
// 006f6596  c20400               ret 4

extern "C" int __cdecl _ismbcprint(int c);

struct CXTMaskEditT {
    int IsValidChar(unsigned char nChar);
};

int CXTMaskEditT::IsValidChar(unsigned char nChar) {
    if (_ismbcprint((signed char)nChar) == 0)
        return 1;
    if (((int (__thiscall *)(CXTMaskEditT *, unsigned char))*(void **)(*(int *)this + 0x14c))(this, nChar) != 0)
        return 1;
    return 0;
}
