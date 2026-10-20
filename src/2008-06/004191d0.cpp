// from server: 100% by colin
// roc 2008-06 004191d0  unit: VCLuaFunction::?$CComObject  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004191d0
//
// 004191d0  55                   push ebp
// 004191d1  8bec                 mov ebp, esp
// 004191d3  6aff                 push -1
// 004191d5  684bdd7b00           push 0x7bdd4b
// 004191da  64a100000000         mov eax, dword ptr fs:[0]
// 004191e0  50                   push eax
// 004191e1  64892500000000       mov dword ptr fs:[0], esp
// 004191e8  83ec0c               sub esp, 0xc
// 004191eb  53                   push ebx
// 004191ec  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 004191ef  56                   push esi
// 004191f0  33f6                 xor esi, esi
// 004191f2  57                   push edi
// 004191f3  8965f0               mov dword ptr [ebp - 0x10], esp
// 004191f6  3bde                 cmp ebx, esi
// 004191f8  7518                 jne 0x419212
// 004191fa  b803400080           mov eax, 0x80004003
// 004191ff  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00419202  64890d00000000       mov dword ptr fs:[0], ecx
// 00419209  5f                   pop edi
// 0041920a  5e                   pop esi
// 0041920b  5b                   pop ebx
// 0041920c  8be5                 mov esp, ebp
// 0041920e  5d                   pop ebp
// 0041920f  c20c00               ret 0xc
// 00419212  bf0e000780           mov edi, 0x8007000e
// 00419217  6a44                 push 0x44
// 00419219  8933                 mov dword ptr [ebx], esi
// 0041921b  897d10               mov dword ptr [ebp + 0x10], edi
// 0041921e  8975fc               mov dword ptr [ebp - 4], esi
// 00419221  e8fa762800           call 0x6a0920
// 00419226  8bc8                 mov ecx, eax
// 00419228  83c404               add esp, 4
// 0041922b  894dec               mov dword ptr [ebp - 0x14], ecx
// 0041922e  c645fc01             mov byte ptr [ebp - 4], 1
// 00419232  3bce                 cmp ecx, esi
// 00419234  740b                 je 0x419241
// 00419236  8b4508               mov eax, dword ptr [ebp + 8]
// 00419239  50                   push eax
// 0041923a  e8c1f5ffff           call 0x418800
// 0041923f  8bf0                 mov esi, eax
// 00419241  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 00419248  85f6                 test esi, esi
// 0041924a  7430                 je 0x41927c
// 0041924c  8b550c               mov edx, dword ptr [ebp + 0xc]
// 0041924f  8b0e                 mov ecx, dword ptr [esi]
// 00419251  8b01                 mov eax, dword ptr [ecx]
// 00419253  53                   push ebx
// 00419254  52                   push edx
// 00419255  56                   push esi
// 00419256  ffd0                 call eax
// 00419258  8bf8                 mov edi, eax
// 0041925a  85ff                 test edi, edi
// 0041925c  741e                 je 0x41927c
// 0041925e  8b16                 mov edx, dword ptr [esi]
// 00419260  8b420c               mov eax, dword ptr [edx + 0xc]
// 00419263  6a01                 push 1
// 00419265  8bce                 mov ecx, esi
// 00419267  ffd0                 call eax
// 00419269  eb11                 jmp 0x41927c

struct __RocException { long status; __RocException(const __RocException&); ~__RocException(); };
// from server: 97% by king_originala
typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

struct Object {
    virtual long __stdcall QueryInterface(const void*, void**);
    virtual unsigned long __stdcall AddRef();
    virtual unsigned long __stdcall Release();
    virtual ~Object();

    unsigned char storage[64];

    Object(void*);
};

struct Creator {
    static long __stdcall Create(void*, const void*, void**);
};

long __stdcall Creator::Create(void* context, const void* iid, void** result)
{
    if (result == 0)
        return (long)0x80004003;

    *result = 0;
    long status = (long)0x8007000e;
    Object* object = 0;

    try {
        object = new Object(context);
    }
    catch (__RocException __rocException) {
    }

    if (object != 0) {
        status = object->QueryInterface(iid, result);
        if (status != 0)
            delete object;
    }

    return status;
}
