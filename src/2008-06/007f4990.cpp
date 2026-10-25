// from server: 100% by king_originala
// roc 2008-06 007f4990  unit: seg_007f0000  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f4990
//
// 007f4990  53                   push ebx
// 007f4991  55                   push ebp
// 007f4992  56                   push esi
// 007f4993  57                   push edi
// 007f4994  6a04                 push 4
// 007f4996  83ec0c               sub esp, 0xc
// 007f4999  8bc4                 mov eax, esp
// 007f499b  b990db5900           mov ecx, 0x59db90
// 007f49a0  8908                 mov dword ptr [eax], ecx
// 007f49a2  33d2                 xor edx, edx
// 007f49a4  895004               mov dword ptr [eax + 4], edx
// 007f49a7  83ec0c               sub esp, 0xc
// 007f49aa  33f6                 xor esi, esi
// 007f49ac  897008               mov dword ptr [eax + 8], esi
// 007f49af  8bc4                 mov eax, esp
// 007f49b1  bfd08c5900           mov edi, 0x598cd0
// 007f49b6  8938                 mov dword ptr [eax], edi
// 007f49b8  33db                 xor ebx, ebx
// 007f49ba  895804               mov dword ptr [eax + 4], ebx
// 007f49bd  33ed                 xor ebp, ebp
// 007f49bf  896808               mov dword ptr [eax + 8], ebp
// 007f49c2  a148a29400           mov eax, dword ptr [0x94a248]
// 007f49c7  50                   push eax
// 007f49c8  68a8318300           push 0x8331a8
// 007f49cd  b948619700           mov ecx, 0x976148
// 007f49d2  e8597fdaff           call 0x59c930
// 007f49d7  6870dc7f00           push 0x7fdc70
// 007f49dc  e8cecdeaff           call 0x6a17af
// 007f49e1  83c404               add esp, 4
// 007f49e4  5f                   pop edi
// 007f49e5  5e                   pop esi
// 007f49e6  5d                   pop ebp
// 007f49e7  5b                   pop ebx
// 007f49e8  c3                   ret 

extern "C" void __cdecl callback_598cd0();
extern "C" void __cdecl callback_59db90();
extern "C" void __cdecl cleanup_7fdc70();
extern "C" int __cdecl register_cleanup(void (__cdecl *)());

struct Callback
{
    void (__cdecl *function)();
    int context;
    int reserved;

    Callback(void (__cdecl *f)());
};

inline Callback::Callback(void (__cdecl *f)())
    : function(f), context(0), reserved(0)
{
}

struct Descriptor
{
    void initialize(const char *, void *, Callback, Callback, int);
};

void initialize_7f4990()
{
    reinterpret_cast<Descriptor *>(0x976148)->initialize(
        reinterpret_cast<const char *>(0x8331a8),
        *reinterpret_cast<void **>(0x94a248),
        Callback(callback_598cd0),
        Callback(callback_59db90),
        4);
    register_cleanup(cleanup_7fdc70);
}
