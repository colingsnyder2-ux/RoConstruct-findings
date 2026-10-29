// roc 2010-06 004837c0  unit: RBX::LDraw2Lua::LuaWriter  size: 543 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004837c0
//
// 004837c0  83ec24               sub esp, 0x24
// 004837c3  53                   push ebx
// 004837c4  55                   push ebp
// 004837c5  56                   push esi
// 004837c6  57                   push edi
// 004837c7  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 004837cb  8d44241c             lea eax, [esp + 0x1c]
// 004837cf  50                   push eax
// 004837d0  8bcf                 mov ecx, edi
// 004837d2  ff1524a59e00         call dword ptr [0x9ea524]
// 004837d8  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 004837dc  8d4c2414             lea ecx, [esp + 0x14]
// 004837e0  51                   push ecx
// 004837e1  8bcd                 mov ecx, ebp
// 004837e3  ff1524a59e00         call dword ptr [0x9ea524]
// 004837e9  8b1d0ca99e00         mov ebx, dword ptr [0x9ea90c]
// 004837ef  90                   nop 
// 004837f0  8d542424             lea edx, [esp + 0x24]
// 004837f4  52                   push edx
// 004837f5  8bcf                 mov ecx, edi
// 004837f7  ff1520a59e00         call dword ptr [0x9ea520]
// 004837fd  8bf0                 mov esi, eax
// 004837ff  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00483803  83f8fc               cmp eax, -4
// 00483806  740a                 je 0x483812
// 00483808  85c0                 test eax, eax
// 0048380a  7404                 je 0x483810
// 0048380c  3b06                 cmp eax, dword ptr [esi]
// 0048380e  7402                 je 0x483812
// 00483810  ffd3                 call ebx
// 00483812  8b442420             mov eax, dword ptr [esp + 0x20]
// 00483816  3b4604               cmp eax, dword ptr [esi + 4]
// 00483819  0f8492010000         je 0x4839b1
// 0048381f  8d4c242c             lea ecx, [esp + 0x2c]
// 00483823  51                   push ecx
// 00483824  8bcd                 mov ecx, ebp
// 00483826  ff1520a59e00         call dword ptr [0x9ea520]
// 0048382c  8bf0                 mov esi, eax
// 0048382e  8b442414             mov eax, dword ptr [esp + 0x14]
// 00483832  83f8fc               cmp eax, -4
// 00483835  740e                 je 0x483845
// 00483837  85c0                 test eax, eax
// 00483839  7404                 je 0x48383f
// 0048383b  3b06                 cmp eax, dword ptr [esi]
// 0048383d  7406                 je 0x483845
// 0048383f  ffd3                 call ebx
// 00483841  8b442414             mov eax, dword ptr [esp + 0x14]
// 00483845  8b542418             mov edx, dword ptr [esp + 0x18]
// 00483849  3b5604               cmp edx, dword ptr [esi + 4]
// 0048384c  0f845f010000         je 0x4839b1
// 00483852  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00483856  83f9fc               cmp ecx, -4
// 00483859  7423                 je 0x48387e
// 0048385b  85c9                 test ecx, ecx
// 0048385d  7506                 jne 0x483865
// 0048385f  ffd3                 call ebx
// 00483861  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00483865  ff1530a59e00         call dword ptr [0x9ea530]
// 0048386b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0048386f  034114               add eax, dword ptr [ecx + 0x14]
// 00483872  39442420             cmp dword ptr [esp + 0x20], eax
// 00483876  7202                 jb 0x48387a
// 00483878  ffd3                 call ebx
// 0048387a  8b442414             mov eax, dword ptr [esp + 0x14]
// 0048387e  8b742420             mov esi, dword ptr [esp + 0x20]
// 00483882  83f8fc               cmp eax, -4
// 00483885  7421                 je 0x4838a8
// 00483887  85c0                 test eax, eax
// 00483889  7506                 jne 0x483891
// 0048388b  ffd3                 call ebx
// 0048388d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00483891  8bc8                 mov ecx, eax
// 00483893  ff1530a59e00         call dword ptr [0x9ea530]
// 00483899  8b542414             mov edx, dword ptr [esp + 0x14]
// 0048389d  034214               add eax, dword ptr [edx + 0x14]
// 004838a0  39442418             cmp dword ptr [esp + 0x18], eax
// 004838a4  7202                 jb 0x4838a8
// 004838a6  ffd3                 call ebx
// 004838a8  8b442418             mov eax, dword ptr [esp + 0x18]
// 004838ac  0fbe08               movsx ecx, byte ptr [eax]
// 004838af  51                   push ecx
// 004838b0  ff15a0a89e00         call dword ptr [0x9ea8a0]
// 004838b6  0fbe16               movsx edx, byte ptr [esi]
// 004838b9  52                   push edx
// 004838ba  89442418             mov dword ptr [esp + 0x18], eax
// 004838be  ff15a0a89e00         call dword ptr [0x9ea8a0]
// 004838c4  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004838c8  83c408               add esp, 8
// 004838cb  3bc1                 cmp eax, ecx
// 004838cd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004838d1  755e                 jne 0x483931
// 004838d3  83f9fc               cmp ecx, -4
// 004838d6  741f                 je 0x4838f7
// 004838d8  85c9                 test ecx, ecx
// 004838da  7506                 jne 0x4838e2
// 004838dc  ffd3                 call ebx
// 004838de  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004838e2  ff1530a59e00         call dword ptr [0x9ea530]
// 004838e8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004838ec  034114               add eax, dword ptr [ecx + 0x14]
// 004838ef  39442420             cmp dword ptr [esp + 0x20], eax
// 004838f3  7202                 jb 0x4838f7
// 004838f5  ffd3                 call ebx
// 004838f7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004838fb  be01000000           mov esi, 1
// 00483900  01742420             add dword ptr [esp + 0x20], esi
// 00483904  83f9fc               cmp ecx, -4
// 00483907  741f                 je 0x483928
// 00483909  85c9                 test ecx, ecx
// 0048390b  7506                 jne 0x483913
// 0048390d  ffd3                 call ebx
// 0048390f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00483913  ff1530a59e00         call dword ptr [0x9ea530]
// 00483919  8b542414             mov edx, dword ptr [esp + 0x14]
// 0048391d  034214               add eax, dword ptr [edx + 0x14]
// 00483920  39442418             cmp dword ptr [esp + 0x18], eax
// 00483924  7202                 jb 0x483928
// 00483926  ffd3                 call ebx
// 00483928  01742418             add dword ptr [esp + 0x18], esi
// 0048392c  e9bffeffff           jmp 0x4837f0
// 00483931  83f9fc               cmp ecx, -4
// 00483934  741f                 je 0x483955
// 00483936  85c9                 test ecx, ecx
// 00483938  7506                 jne 0x483940
// 0048393a  ffd3                 call ebx
// 0048393c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00483940  ff1530a59e00         call dword ptr [0x9ea530]
// 00483946  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0048394a  034114               add eax, dword ptr [ecx + 0x14]
// 0048394d  39442420             cmp dword ptr [esp + 0x20], eax
// 00483951  7202                 jb 0x483955
// 00483953  ffd3                 call ebx
// 00483955  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00483959  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0048395d  83f9fc               cmp ecx, -4
// 00483960  741f                 je 0x483981
// 00483962  85c9                 test ecx, ecx
// 00483964  7506                 jne 0x48396c
// 00483966  ffd3                 call ebx
// 00483968  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0048396c  ff1530a59e00         call dword ptr [0x9ea530]
// 00483972  8b542414             mov edx, dword ptr [esp + 0x14]
// 00483976  034214               add eax, dword ptr [edx + 0x14]
// 00483979  39442418             cmp dword ptr [esp + 0x18], eax
// 0048397d  7202                 jb 0x483981
// 0048397f  ffd3                 call ebx
// 00483981  0fbe07               movsx eax, byte ptr [edi]
// 00483984  8b3da0a89e00         mov edi, dword ptr [0x9ea8a0]
// 0048398a  8b742418             mov esi, dword ptr [esp + 0x18]
// 0048398e  50                   push eax
// 0048398f  ffd7                 call edi
// 00483991  0fbe0e               movsx ecx, byte ptr [esi]
// 00483994  51                   push ecx
// 00483995  8bd8                 mov ebx, eax
// 00483997  ffd7                 call edi
// 00483999  83c408               add esp, 8
// 0048399c  33d2                 xor edx, edx
// 0048399e  3bd8                 cmp ebx, eax
// 004839a0  0f9dc2               setge dl
// 004839a3  5f                   pop edi
// 004839a4  5e                   pop esi
// 004839a5  5d                   pop ebp
// 004839a6  5b                   pop ebx
// 004839a7  8d5412ff             lea edx, [edx + edx - 1]
// 004839ab  8bc2                 mov eax, edx
// 004839ad  83c424               add esp, 0x24
// 004839b0  c3                   ret 
// 004839b1  8bcf                 mov ecx, edi
// 004839b3  ff1564a49e00         call dword ptr [0x9ea464]
// 004839b9  8bcd                 mov ecx, ebp
// 004839bb  8bf0                 mov esi, eax
// 004839bd  ff1564a49e00         call dword ptr [0x9ea464]
// 004839c3  3bf0                 cmp esi, eax
// 004839c5  750a                 jne 0x4839d1
// 004839c7  5f                   pop edi
// 004839c8  5e                   pop esi
// 004839c9  5d                   pop ebp
// 004839ca  33c0                 xor eax, eax
// 004839cc  5b                   pop ebx
// 004839cd  83c424               add esp, 0x24
// 004839d0  c3                   ret 
// 004839d1  5f                   pop edi
// 004839d2  1bc0                 sbb eax, eax
// 004839d4  5e                   pop esi
// 004839d5  83e0fe               and eax, 0xfffffffe
// 004839d8  5d                   pop ebp
// 004839d9  40                   inc eax
// 004839da  5b                   pop ebx
// 004839db  83c424               add esp, 0x24
// 004839de  c3                   ret 
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