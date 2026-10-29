// roc 2009-06 00473360  unit: RBX::LDraw2Lua::LuaWriter  size: 543 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00473360
//
// 00473360  83ec24               sub esp, 0x24
// 00473363  53                   push ebx
// 00473364  55                   push ebp
// 00473365  56                   push esi
// 00473366  57                   push edi
// 00473367  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0047336b  8d44241c             lea eax, [esp + 0x1c]
// 0047336f  50                   push eax
// 00473370  8bcf                 mov ecx, edi
// 00473372  ff15b0e38900         call dword ptr [0x89e3b0]
// 00473378  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 0047337c  8d4c2414             lea ecx, [esp + 0x14]
// 00473380  51                   push ecx
// 00473381  8bcd                 mov ecx, ebp
// 00473383  ff15b0e38900         call dword ptr [0x89e3b0]
// 00473389  8b1dace98900         mov ebx, dword ptr [0x89e9ac]
// 0047338f  90                   nop 
// 00473390  8d542424             lea edx, [esp + 0x24]
// 00473394  52                   push edx
// 00473395  8bcf                 mov ecx, edi
// 00473397  ff15b4e38900         call dword ptr [0x89e3b4]
// 0047339d  8bf0                 mov esi, eax
// 0047339f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004733a3  83f8fc               cmp eax, -4
// 004733a6  740a                 je 0x4733b2
// 004733a8  85c0                 test eax, eax
// 004733aa  7404                 je 0x4733b0
// 004733ac  3b06                 cmp eax, dword ptr [esi]
// 004733ae  7402                 je 0x4733b2
// 004733b0  ffd3                 call ebx
// 004733b2  8b442420             mov eax, dword ptr [esp + 0x20]
// 004733b6  3b4604               cmp eax, dword ptr [esi + 4]
// 004733b9  0f8492010000         je 0x473551
// 004733bf  8d4c242c             lea ecx, [esp + 0x2c]
// 004733c3  51                   push ecx
// 004733c4  8bcd                 mov ecx, ebp
// 004733c6  ff15b4e38900         call dword ptr [0x89e3b4]
// 004733cc  8bf0                 mov esi, eax
// 004733ce  8b442414             mov eax, dword ptr [esp + 0x14]
// 004733d2  83f8fc               cmp eax, -4
// 004733d5  740e                 je 0x4733e5
// 004733d7  85c0                 test eax, eax
// 004733d9  7404                 je 0x4733df
// 004733db  3b06                 cmp eax, dword ptr [esi]
// 004733dd  7406                 je 0x4733e5
// 004733df  ffd3                 call ebx
// 004733e1  8b442414             mov eax, dword ptr [esp + 0x14]
// 004733e5  8b542418             mov edx, dword ptr [esp + 0x18]
// 004733e9  3b5604               cmp edx, dword ptr [esi + 4]
// 004733ec  0f845f010000         je 0x473551
// 004733f2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004733f6  83f9fc               cmp ecx, -4
// 004733f9  7423                 je 0x47341e
// 004733fb  85c9                 test ecx, ecx
// 004733fd  7506                 jne 0x473405
// 004733ff  ffd3                 call ebx
// 00473401  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00473405  ff15cce48900         call dword ptr [0x89e4cc]
// 0047340b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0047340f  034114               add eax, dword ptr [ecx + 0x14]
// 00473412  39442420             cmp dword ptr [esp + 0x20], eax
// 00473416  7202                 jb 0x47341a
// 00473418  ffd3                 call ebx
// 0047341a  8b442414             mov eax, dword ptr [esp + 0x14]
// 0047341e  8b742420             mov esi, dword ptr [esp + 0x20]
// 00473422  83f8fc               cmp eax, -4
// 00473425  7421                 je 0x473448
// 00473427  85c0                 test eax, eax
// 00473429  7506                 jne 0x473431
// 0047342b  ffd3                 call ebx
// 0047342d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00473431  8bc8                 mov ecx, eax
// 00473433  ff15cce48900         call dword ptr [0x89e4cc]
// 00473439  8b542414             mov edx, dword ptr [esp + 0x14]
// 0047343d  034214               add eax, dword ptr [edx + 0x14]
// 00473440  39442418             cmp dword ptr [esp + 0x18], eax
// 00473444  7202                 jb 0x473448
// 00473446  ffd3                 call ebx
// 00473448  8b442418             mov eax, dword ptr [esp + 0x18]
// 0047344c  0fbe08               movsx ecx, byte ptr [eax]
// 0047344f  51                   push ecx
// 00473450  ff15e8e88900         call dword ptr [0x89e8e8]
// 00473456  0fbe16               movsx edx, byte ptr [esi]
// 00473459  52                   push edx
// 0047345a  89442418             mov dword ptr [esp + 0x18], eax
// 0047345e  ff15e8e88900         call dword ptr [0x89e8e8]
// 00473464  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00473468  83c408               add esp, 8
// 0047346b  3bc1                 cmp eax, ecx
// 0047346d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00473471  755e                 jne 0x4734d1
// 00473473  83f9fc               cmp ecx, -4
// 00473476  741f                 je 0x473497
// 00473478  85c9                 test ecx, ecx
// 0047347a  7506                 jne 0x473482
// 0047347c  ffd3                 call ebx
// 0047347e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00473482  ff15cce48900         call dword ptr [0x89e4cc]
// 00473488  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0047348c  034114               add eax, dword ptr [ecx + 0x14]
// 0047348f  39442420             cmp dword ptr [esp + 0x20], eax
// 00473493  7202                 jb 0x473497
// 00473495  ffd3                 call ebx
// 00473497  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0047349b  be01000000           mov esi, 1
// 004734a0  01742420             add dword ptr [esp + 0x20], esi
// 004734a4  83f9fc               cmp ecx, -4
// 004734a7  741f                 je 0x4734c8
// 004734a9  85c9                 test ecx, ecx
// 004734ab  7506                 jne 0x4734b3
// 004734ad  ffd3                 call ebx
// 004734af  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004734b3  ff15cce48900         call dword ptr [0x89e4cc]
// 004734b9  8b542414             mov edx, dword ptr [esp + 0x14]
// 004734bd  034214               add eax, dword ptr [edx + 0x14]
// 004734c0  39442418             cmp dword ptr [esp + 0x18], eax
// 004734c4  7202                 jb 0x4734c8
// 004734c6  ffd3                 call ebx
// 004734c8  01742418             add dword ptr [esp + 0x18], esi
// 004734cc  e9bffeffff           jmp 0x473390
// 004734d1  83f9fc               cmp ecx, -4
// 004734d4  741f                 je 0x4734f5
// 004734d6  85c9                 test ecx, ecx
// 004734d8  7506                 jne 0x4734e0
// 004734da  ffd3                 call ebx
// 004734dc  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004734e0  ff15cce48900         call dword ptr [0x89e4cc]
// 004734e6  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004734ea  034114               add eax, dword ptr [ecx + 0x14]
// 004734ed  39442420             cmp dword ptr [esp + 0x20], eax
// 004734f1  7202                 jb 0x4734f5
// 004734f3  ffd3                 call ebx
// 004734f5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004734f9  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004734fd  83f9fc               cmp ecx, -4
// 00473500  741f                 je 0x473521
// 00473502  85c9                 test ecx, ecx
// 00473504  7506                 jne 0x47350c
// 00473506  ffd3                 call ebx
// 00473508  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0047350c  ff15cce48900         call dword ptr [0x89e4cc]
// 00473512  8b542414             mov edx, dword ptr [esp + 0x14]
// 00473516  034214               add eax, dword ptr [edx + 0x14]
// 00473519  39442418             cmp dword ptr [esp + 0x18], eax
// 0047351d  7202                 jb 0x473521
// 0047351f  ffd3                 call ebx
// 00473521  0fbe07               movsx eax, byte ptr [edi]
// 00473524  8b3de8e88900         mov edi, dword ptr [0x89e8e8]
// 0047352a  8b742418             mov esi, dword ptr [esp + 0x18]
// 0047352e  50                   push eax
// 0047352f  ffd7                 call edi
// 00473531  0fbe0e               movsx ecx, byte ptr [esi]
// 00473534  51                   push ecx
// 00473535  8bd8                 mov ebx, eax
// 00473537  ffd7                 call edi
// 00473539  83c408               add esp, 8
// 0047353c  33d2                 xor edx, edx
// 0047353e  3bd8                 cmp ebx, eax
// 00473540  0f9dc2               setge dl
// 00473543  5f                   pop edi
// 00473544  5e                   pop esi
// 00473545  5d                   pop ebp
// 00473546  5b                   pop ebx
// 00473547  8d5412ff             lea edx, [edx + edx - 1]
// 0047354b  8bc2                 mov eax, edx
// 0047354d  83c424               add esp, 0x24
// 00473550  c3                   ret 
// 00473551  8bcf                 mov ecx, edi
// 00473553  ff1568e48900         call dword ptr [0x89e468]
// 00473559  8bcd                 mov ecx, ebp
// 0047355b  8bf0                 mov esi, eax
// 0047355d  ff1568e48900         call dword ptr [0x89e468]
// 00473563  3bf0                 cmp esi, eax
// 00473565  750a                 jne 0x473571
// 00473567  5f                   pop edi
// 00473568  5e                   pop esi
// 00473569  5d                   pop ebp
// 0047356a  33c0                 xor eax, eax
// 0047356c  5b                   pop ebx
// 0047356d  83c424               add esp, 0x24
// 00473570  c3                   ret 
// 00473571  5f                   pop edi
// 00473572  1bc0                 sbb eax, eax
// 00473574  5e                   pop esi
// 00473575  83e0fe               and eax, 0xfffffffe
// 00473578  5d                   pop ebp
// 00473579  40                   inc eax
// 0047357a  5b                   pop ebx
// 0047357b  83c424               add esp, 0x24
// 0047357e  c3                   ret 
// copied from an identical function in another client (function ?stringCompareNoCase@@YAHABV?$basic_str@D@rs@@0@Z)

// from server: 100% by EspClaude
// roc 2008-06 0046f9f0  size: 543 bytes
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" __declspec(dllimport) void __cdecl _invalid_parameter_noinfo(void);
extern "C" __declspec(dllimport) int __cdecl toupper(int c);

namespace rs {
template <class T> class basic_str;

template <class T> class citer {
public:
    typedef basic_str<T> S;
    const S* _Mycont;
    const T* _Myptr;
    citer() { _Myptr = 0; }
    const T& operator*() const
    {
        if (_Mycont != (const S*)-4) {
            if (!(_Mycont != 0)) _invalid_parameter_noinfo();
            if (!(_Myptr < (((S*)_Mycont)->_Myptr() + _Mycont->_Mysize))) _invalid_parameter_noinfo();
        }
        return *_Myptr;
    }
    citer& operator++()
    {
        if (_Mycont != (const S*)-4) {
            if (!(_Mycont != 0)) _invalid_parameter_noinfo();
            if (!(_Myptr < (((S*)_Mycont)->_Myptr() + _Mycont->_Mysize))) _invalid_parameter_noinfo();
        }
        ++_Myptr;
        return *this;
    }
    bool operator==(const citer& r) const
    {
        if (_Mycont != (const S*)-4) {
            if (!(_Mycont != 0 && _Mycont == r._Mycont)) _invalid_parameter_noinfo();
        }
        return _Myptr == r._Myptr;
    }
    bool operator!=(const citer& r) const { return !(*this == r); }
};

template <class T> class basic_str {
public:
    typedef citer<T> const_iterator;
    void* _Myaux;
    union { T _Buf[16]; T* _Ptr; } _Bx;
    unsigned int _Mysize;
    unsigned int _Myres;
    __declspec(noinline) const_iterator begin() const { const_iterator i; i._Mycont = this; i._Myptr = _Bx._Ptr; return i; }
    __declspec(noinline) const_iterator end() const { const_iterator i; i._Mycont = this; i._Myptr = _Bx._Ptr + _Mysize; return i; }
    __declspec(noinline) unsigned int size() const { return _Mysize; }
    __declspec(noinline) T* _Myptr() { return _Bx._Ptr; }
};
extern template class __declspec(dllimport) basic_str<char>;
typedef basic_str<char> string;
}

int stringCompareNoCase(const rs::string& s1, const rs::string& s2)
{
    rs::string::const_iterator it1 = s1.begin();
    rs::string::const_iterator it2 = s2.begin();
    while ((it1 != s1.end()) && (it2 != s2.end())) {
        if (::toupper(*it1) != ::toupper(*it2))
            return (::toupper(*it1) < ::toupper(*it2)) ? -1 : 1;
        ++it1;
        ++it2;
    }
    unsigned int size1 = s1.size(), size2 = s2.size();
    if (size1 == size2)
        return 0;
    return (size1 < size2) ? -1 : 1;
}