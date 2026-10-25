// from server: 100% by colin
// roc 2008-06 004134d0  unit: CutVerb  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004134d0
//
// 004134d0  53                   push ebx
// 004134d1  8a5c240c             mov bl, byte ptr [esp + 0xc]
// 004134d5  55                   push ebp
// 004134d6  56                   push esi
// 004134d7  57                   push edi
// 004134d8  8bf1                 mov esi, ecx
// 004134da  b850e98000           mov eax, 0x80e950
// 004134df  84db                 test bl, bl
// 004134e1  7505                 jne 0x4134e8
// 004134e3  b848e98000           mov eax, 0x80e948
// 004134e8  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004134ec  85ed                 test ebp, ebp
// 004134ee  7408                 je 0x4134f8
// 004134f0  8dbdc8010000         lea edi, [ebp + 0x1c8]
// 004134f6  eb02                 jmp 0x4134fa
// 004134f8  33ff                 xor edi, edi
// 004134fa  83ec1c               sub esp, 0x1c
// 004134fd  8bcc                 mov ecx, esp
// 004134ff  89642434             mov dword ptr [esp + 0x34], esp
// 00413503  50                   push eax
// 00413504  ff1558248000         call dword ptr [0x802458]
// 0041350a  57                   push edi
// 0041350b  8bce                 mov ecx, esi
// 0041350d  e8cefe1600           call 0x5833e0
// 00413512  5f                   pop edi
// 00413513  896e0c               mov dword ptr [esi + 0xc], ebp
// 00413516  885e10               mov byte ptr [esi + 0x10], bl
// 00413519  c70634e98000         mov dword ptr [esi], 0x80e934
// 0041351f  8bc6                 mov eax, esi
// 00413521  5e                   pop esi
// 00413522  5d                   pop ebp
// 00413523  5b                   pop ebx
// 00413524  c20800               ret 8

namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;
    template<class T, class Traits, class Alloc>
    class __declspec(dllimport) basic_string {
        char storage[28];
    public:
        basic_string(const T*);
        basic_string(const basic_string&);
        ~basic_string();
    };
    typedef basic_string<char, char_traits<char>, allocator<char> > string;
}
struct Context {
    char padding[456];
    char selection;
};
struct Verb {
    virtual void execute();
    unsigned int data[2];
    Verb(void *, std::string);
};
struct PasteVerb : Verb {
    Context *context;
    bool pasteInto;
    virtual void execute();
    PasteVerb(Context *, bool);
};
PasteVerb::PasteVerb(Context *owner, bool into)
    : Verb(owner ? &owner->selection : 0,
           std::string(into ? "PasteInto" : "Paste")),
      context(owner),
      pasteInto(into)
{
}
