// roc 2009-12 0047d420  unit: RBX::LDraw2Lua::LuaWriter  size: 543 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0047d420
//
// 0047d420  83ec24               sub esp, 0x24
// 0047d423  53                   push ebx
// 0047d424  55                   push ebp
// 0047d425  56                   push esi
// 0047d426  57                   push edi
// 0047d427  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0047d42b  8d44241c             lea eax, [esp + 0x1c]
// 0047d42f  50                   push eax
// 0047d430  8bcf                 mov ecx, edi
// 0047d432  ff15f0b59800         call dword ptr [0x98b5f0]
// 0047d438  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 0047d43c  8d4c2414             lea ecx, [esp + 0x14]
// 0047d440  51                   push ecx
// 0047d441  8bcd                 mov ecx, ebp
// 0047d443  ff15f0b59800         call dword ptr [0x98b5f0]
// 0047d449  8b1d60b79800         mov ebx, dword ptr [0x98b760]
// 0047d44f  90                   nop 
// 0047d450  8d542424             lea edx, [esp + 0x24]
// 0047d454  52                   push edx
// 0047d455  8bcf                 mov ecx, edi
// 0047d457  ff15f4b59800         call dword ptr [0x98b5f4]
// 0047d45d  8bf0                 mov esi, eax
// 0047d45f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0047d463  83f8fc               cmp eax, -4
// 0047d466  740a                 je 0x47d472
// 0047d468  85c0                 test eax, eax
// 0047d46a  7404                 je 0x47d470
// 0047d46c  3b06                 cmp eax, dword ptr [esi]
// 0047d46e  7402                 je 0x47d472
// 0047d470  ffd3                 call ebx
// 0047d472  8b442420             mov eax, dword ptr [esp + 0x20]
// 0047d476  3b4604               cmp eax, dword ptr [esi + 4]
// 0047d479  0f8492010000         je 0x47d611
// 0047d47f  8d4c242c             lea ecx, [esp + 0x2c]
// 0047d483  51                   push ecx
// 0047d484  8bcd                 mov ecx, ebp
// 0047d486  ff15f4b59800         call dword ptr [0x98b5f4]
// 0047d48c  8bf0                 mov esi, eax
// 0047d48e  8b442414             mov eax, dword ptr [esp + 0x14]
// 0047d492  83f8fc               cmp eax, -4
// 0047d495  740e                 je 0x47d4a5
// 0047d497  85c0                 test eax, eax
// 0047d499  7404                 je 0x47d49f
// 0047d49b  3b06                 cmp eax, dword ptr [esi]
// 0047d49d  7406                 je 0x47d4a5
// 0047d49f  ffd3                 call ebx
// 0047d4a1  8b442414             mov eax, dword ptr [esp + 0x14]
// 0047d4a5  8b542418             mov edx, dword ptr [esp + 0x18]
// 0047d4a9  3b5604               cmp edx, dword ptr [esi + 4]
// 0047d4ac  0f845f010000         je 0x47d611
// 0047d4b2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0047d4b6  83f9fc               cmp ecx, -4
// 0047d4b9  7423                 je 0x47d4de
// 0047d4bb  85c9                 test ecx, ecx
// 0047d4bd  7506                 jne 0x47d4c5
// 0047d4bf  ffd3                 call ebx
// 0047d4c1  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0047d4c5  ff15e4b59800         call dword ptr [0x98b5e4]
// 0047d4cb  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0047d4cf  034114               add eax, dword ptr [ecx + 0x14]
// 0047d4d2  39442420             cmp dword ptr [esp + 0x20], eax
// 0047d4d6  7202                 jb 0x47d4da
// 0047d4d8  ffd3                 call ebx
// 0047d4da  8b442414             mov eax, dword ptr [esp + 0x14]
// 0047d4de  8b742420             mov esi, dword ptr [esp + 0x20]
// 0047d4e2  83f8fc               cmp eax, -4
// 0047d4e5  7421                 je 0x47d508
// 0047d4e7  85c0                 test eax, eax
// 0047d4e9  7506                 jne 0x47d4f1
// 0047d4eb  ffd3                 call ebx
// 0047d4ed  8b442414             mov eax, dword ptr [esp + 0x14]
// 0047d4f1  8bc8                 mov ecx, eax
// 0047d4f3  ff15e4b59800         call dword ptr [0x98b5e4]
// 0047d4f9  8b542414             mov edx, dword ptr [esp + 0x14]
// 0047d4fd  034214               add eax, dword ptr [edx + 0x14]
// 0047d500  39442418             cmp dword ptr [esp + 0x18], eax
// 0047d504  7202                 jb 0x47d508
// 0047d506  ffd3                 call ebx
// 0047d508  8b442418             mov eax, dword ptr [esp + 0x18]
// 0047d50c  0fbe08               movsx ecx, byte ptr [eax]
// 0047d50f  51                   push ecx
// 0047d510  ff15a0b79800         call dword ptr [0x98b7a0]
// 0047d516  0fbe16               movsx edx, byte ptr [esi]
// 0047d519  52                   push edx
// 0047d51a  89442418             mov dword ptr [esp + 0x18], eax
// 0047d51e  ff15a0b79800         call dword ptr [0x98b7a0]
// 0047d524  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0047d528  83c408               add esp, 8
// 0047d52b  3bc1                 cmp eax, ecx
// 0047d52d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0047d531  755e                 jne 0x47d591
// 0047d533  83f9fc               cmp ecx, -4
// 0047d536  741f                 je 0x47d557
// 0047d538  85c9                 test ecx, ecx
// 0047d53a  7506                 jne 0x47d542
// 0047d53c  ffd3                 call ebx
// 0047d53e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0047d542  ff15e4b59800         call dword ptr [0x98b5e4]
// 0047d548  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0047d54c  034114               add eax, dword ptr [ecx + 0x14]
// 0047d54f  39442420             cmp dword ptr [esp + 0x20], eax
// 0047d553  7202                 jb 0x47d557
// 0047d555  ffd3                 call ebx
// 0047d557  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0047d55b  be01000000           mov esi, 1
// 0047d560  01742420             add dword ptr [esp + 0x20], esi
// 0047d564  83f9fc               cmp ecx, -4
// 0047d567  741f                 je 0x47d588
// 0047d569  85c9                 test ecx, ecx
// 0047d56b  7506                 jne 0x47d573
// 0047d56d  ffd3                 call ebx
// 0047d56f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0047d573  ff15e4b59800         call dword ptr [0x98b5e4]
// 0047d579  8b542414             mov edx, dword ptr [esp + 0x14]
// 0047d57d  034214               add eax, dword ptr [edx + 0x14]
// 0047d580  39442418             cmp dword ptr [esp + 0x18], eax
// 0047d584  7202                 jb 0x47d588
// 0047d586  ffd3                 call ebx
// 0047d588  01742418             add dword ptr [esp + 0x18], esi
// 0047d58c  e9bffeffff           jmp 0x47d450
// 0047d591  83f9fc               cmp ecx, -4
// 0047d594  741f                 je 0x47d5b5
// 0047d596  85c9                 test ecx, ecx
// 0047d598  7506                 jne 0x47d5a0
// 0047d59a  ffd3                 call ebx
// 0047d59c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0047d5a0  ff15e4b59800         call dword ptr [0x98b5e4]
// 0047d5a6  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0047d5aa  034114               add eax, dword ptr [ecx + 0x14]
// 0047d5ad  39442420             cmp dword ptr [esp + 0x20], eax
// 0047d5b1  7202                 jb 0x47d5b5
// 0047d5b3  ffd3                 call ebx
// 0047d5b5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0047d5b9  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0047d5bd  83f9fc               cmp ecx, -4
// 0047d5c0  741f                 je 0x47d5e1
// 0047d5c2  85c9                 test ecx, ecx
// 0047d5c4  7506                 jne 0x47d5cc
// 0047d5c6  ffd3                 call ebx
// 0047d5c8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0047d5cc  ff15e4b59800         call dword ptr [0x98b5e4]
// 0047d5d2  8b542414             mov edx, dword ptr [esp + 0x14]
// 0047d5d6  034214               add eax, dword ptr [edx + 0x14]
// 0047d5d9  39442418             cmp dword ptr [esp + 0x18], eax
// 0047d5dd  7202                 jb 0x47d5e1
// 0047d5df  ffd3                 call ebx
// 0047d5e1  0fbe07               movsx eax, byte ptr [edi]
// 0047d5e4  8b3da0b79800         mov edi, dword ptr [0x98b7a0]
// 0047d5ea  8b742418             mov esi, dword ptr [esp + 0x18]
// 0047d5ee  50                   push eax
// 0047d5ef  ffd7                 call edi
// 0047d5f1  0fbe0e               movsx ecx, byte ptr [esi]
// 0047d5f4  51                   push ecx
// 0047d5f5  8bd8                 mov ebx, eax
// 0047d5f7  ffd7                 call edi
// 0047d5f9  83c408               add esp, 8
// 0047d5fc  33d2                 xor edx, edx
// 0047d5fe  3bd8                 cmp ebx, eax
// 0047d600  0f9dc2               setge dl
// 0047d603  5f                   pop edi
// 0047d604  5e                   pop esi
// 0047d605  5d                   pop ebp
// 0047d606  5b                   pop ebx
// 0047d607  8d5412ff             lea edx, [edx + edx - 1]
// 0047d60b  8bc2                 mov eax, edx
// 0047d60d  83c424               add esp, 0x24
// 0047d610  c3                   ret 
// 0047d611  8bcf                 mov ecx, edi
// 0047d613  ff15a0b69800         call dword ptr [0x98b6a0]
// 0047d619  8bcd                 mov ecx, ebp
// 0047d61b  8bf0                 mov esi, eax
// 0047d61d  ff15a0b69800         call dword ptr [0x98b6a0]
// 0047d623  3bf0                 cmp esi, eax
// 0047d625  750a                 jne 0x47d631
// 0047d627  5f                   pop edi
// 0047d628  5e                   pop esi
// 0047d629  5d                   pop ebp
// 0047d62a  33c0                 xor eax, eax
// 0047d62c  5b                   pop ebx
// 0047d62d  83c424               add esp, 0x24
// 0047d630  c3                   ret 
// 0047d631  5f                   pop edi
// 0047d632  1bc0                 sbb eax, eax
// 0047d634  5e                   pop esi
// 0047d635  83e0fe               and eax, 0xfffffffe
// 0047d638  5d                   pop ebp
// 0047d639  40                   inc eax
// 0047d63a  5b                   pop ebx
// 0047d63b  83c424               add esp, 0x24
// 0047d63e  c3                   ret 
// copied from an identical function in another client (function ?stringCompareNoCase@@YAHABV?$basic_str@D@rs@@0@Z)

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