// from server: 97% by king_originala
// roc 2008-06 004925c0  unit: RBX::Network::VPlayer::?$SignalDesc  size: 477 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004925c0
//
// 004925c0  64a100000000         mov eax, dword ptr fs:[0]
// 004925c6  6aff                 push -1
// 004925c8  6829667c00           push 0x7c6629
// 004925cd  50                   push eax
// 004925ce  64892500000000       mov dword ptr fs:[0], esp
// 004925d5  83ec5c               sub esp, 0x5c
// 004925d8  56                   push esi
// 004925d9  8bf1                 mov esi, ecx
// 004925db  6a01                 push 1
// 004925dd  56                   push esi
// 004925de  e8cd380000           call 0x495eb0
// 004925e3  83c408               add esp, 8
// 004925e6  84c0                 test al, al
// 004925e8  7534                 jne 0x49261e
// 004925ea  68ac1c8200           push 0x821cac
// 004925ef  8d4c2420             lea ecx, [esp + 0x20]
// 004925f3  ff1558248000         call dword ptr [0x802458]
// 004925f9  8d44241c             lea eax, [esp + 0x1c]
// 004925fd  50                   push eax
// 004925fe  8d4c243c             lea ecx, [esp + 0x3c]
// 00492602  c744246c00000000     mov dword ptr [esp + 0x6c], 0
// 0049260a  e84177f7ff           call 0x409d50
// 0049260f  68c81b8d00           push 0x8d1bc8
// 00492614  8d4c243c             lea ecx, [esp + 0x3c]
// 00492618  51                   push ecx
// 00492619  e86eef2000           call 0x6a158c
// 0049261e  8bce                 mov ecx, esi
// 00492620  e85b95ffff           call 0x48bb80
// 00492625  85c0                 test eax, eax
// 00492627  741b                 je 0x492644
// 00492629  8da42400000000       lea esp, [esp]
// 00492630  6a00                 push 0
// 00492632  8bc8                 mov ecx, eax
// 00492634  e8b7820c00           call 0x55a8f0
// 00492639  8bce                 mov ecx, esi
// 0049263b  e84095ffff           call 0x48bb80
// 00492640  85c0                 test eax, eax
// 00492642  75ec                 jne 0x492630
// 00492644  53                   push ebx
// 00492645  55                   push ebp
// 00492646  8d54241c             lea edx, [esp + 0x1c]
// 0049264a  57                   push edi
// 0049264b  52                   push edx
// 0049264c  e8cf95ffff           call 0x48bc20
// 00492651  8b18                 mov ebx, dword ptr [eax]
// 00492653  8b4004               mov eax, dword ptr [eax + 4]
// 00492656  83c404               add esp, 4
// 00492659  895c2418             mov dword ptr [esp + 0x18], ebx
// 0049265d  8944241c             mov dword ptr [esp + 0x1c], eax
// 00492661  85c0                 test eax, eax
// 00492663  740c                 je 0x492671
// 00492665  83c004               add eax, 4
// 00492668  b901000000           mov ecx, 1
// 0049266d  f00fc108             lock xadd dword ptr [eax], ecx
// 00492671  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00492675  c744247401000000     mov dword ptr [esp + 0x74], 1
// 0049267d  85ff                 test edi, edi
// 0049267f  742a                 je 0x4926ab
// 00492681  8d5704               lea edx, [edi + 4]
// 00492684  83c8ff               or eax, 0xffffffff
// 00492687  f00fc102             lock xadd dword ptr [edx], eax
// 0049268b  751e                 jne 0x4926ab
// 0049268d  8b17                 mov edx, dword ptr [edi]
// 0049268f  8b4204               mov eax, dword ptr [edx + 4]
// 00492692  8bcf                 mov ecx, edi
// 00492694  ffd0                 call eax
// 00492696  8d4f08               lea ecx, [edi + 8]
// 00492699  83caff               or edx, 0xffffffff
// 0049269c  f00fc111             lock xadd dword ptr [ecx], edx
// 004926a0  7509                 jne 0x4926ab
// 004926a2  8b07                 mov eax, dword ptr [edi]
// 004926a4  8b5008               mov edx, dword ptr [eax + 8]
// 004926a7  8bcf                 mov ecx, edi
// 004926a9  ffd2                 call edx
// 004926ab  56                   push esi
// 004926ac  8bcb                 mov ecx, ebx
// 004926ae  e83d820c00           call 0x55a8f0
// 004926b3  56                   push esi
// 004926b4  e837f8ffff           call 0x491ef0
// 004926b9  8be8                 mov ebp, eax
// 004926bb  83c404               add esp, 4
// 004926be  85ed                 test ebp, ebp
// 004926c0  0f848a000000         je 0x492750
// 004926c6  8bcd                 mov ecx, ebp
// 004926c8  33ff                 xor edi, edi
// 004926ca  e85187ffff           call 0x48ae20
// 004926cf  85c0                 test eax, eax
// 004926d1  767d                 jbe 0x492750
// 004926d3  8bb508010000         mov esi, dword ptr [ebp + 0x108]
// 004926d9  8b4610               mov eax, dword ptr [esi + 0x10]
// 004926dc  2b460c               sub eax, dword ptr [esi + 0xc]
// 004926df  c1f803               sar eax, 3
// 004926e2  3bf8                 cmp edi, eax
// 004926e4  7206                 jb 0x4926ec
// 004926e6  ff1590288000         call dword ptr [0x802890]
// 004926ec  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004926ef  8b0cf9               mov ecx, dword ptr [ecx + edi*8]
// 004926f2  8d542410             lea edx, [esp + 0x10]
// 004926f6  52                   push edx
// 004926f7  e8546c0c00           call 0x559350
// 004926fc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00492700  53                   push ebx
// 00492701  c644247802           mov byte ptr [esp + 0x78], 2
// 00492706  e8e5810c00           call 0x55a8f0
// 0049270b  8b442414             mov eax, dword ptr [esp + 0x14]
// 0049270f  c644247401           mov byte ptr [esp + 0x74], 1
// 00492714  85c0                 test eax, eax
// 00492716  742c                 je 0x492744
// 00492718  8bf0                 mov esi, eax
// 0049271a  83c004               add eax, 4
// 0049271d  83c9ff               or ecx, 0xffffffff
// 00492720  f00fc108             lock xadd dword ptr [eax], ecx
// 00492724  751e                 jne 0x492744
// 00492726  8b16                 mov edx, dword ptr [esi]
// 00492728  8b4204               mov eax, dword ptr [edx + 4]
// 0049272b  8bce                 mov ecx, esi
// 0049272d  ffd0                 call eax
// 0049272f  8d4e08               lea ecx, [esi + 8]
// 00492732  83caff               or edx, 0xffffffff
// 00492735  f00fc111             lock xadd dword ptr [ecx], edx
// 00492739  7509                 jne 0x492744
// 0049273b  8b06                 mov eax, dword ptr [esi]
// 0049273d  8b5008               mov edx, dword ptr [eax + 8]
// 00492740  8bce                 mov ecx, esi
// 00492742  ffd2                 call edx
// 00492744  8bcd                 mov ecx, ebp
// 00492746  47                   inc edi
// 00492747  e8d486ffff           call 0x48ae20
// 0049274c  3bf8                 cmp edi, eax
// 0049274e  7283                 jb 0x4926d3
// 00492750  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00492754  5f                   pop edi
// 00492755  5d                   pop ebp
// 00492756  c744246cffffffff     mov dword ptr [esp + 0x6c], 0xffffffff
// 0049275e  5b                   pop ebx
// 0049275f  85f6                 test esi, esi
// 00492761  742a                 je 0x49278d
// 00492763  8d4604               lea eax, [esi + 4]
// 00492766  83c9ff               or ecx, 0xffffffff
// 00492769  f00fc108             lock xadd dword ptr [eax], ecx
// 0049276d  751e                 jne 0x49278d
// 0049276f  8b16                 mov edx, dword ptr [esi]
// 00492771  8b4204               mov eax, dword ptr [edx + 4]
// 00492774  8bce                 mov ecx, esi
// 00492776  ffd0                 call eax
// 00492778  8d4e08               lea ecx, [esi + 8]
// 0049277b  83caff               or edx, 0xffffffff
// 0049277e  f00fc111             lock xadd dword ptr [ecx], edx
// 00492782  7509                 jne 0x49278d
// 00492784  8b06                 mov eax, dword ptr [esi]
// 00492786  8b5008               mov edx, dword ptr [eax + 8]
// 00492789  8bce                 mov ecx, esi
// 0049278b  ffd2                 call edx
// 0049278d  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00492791  5e                   pop esi
// 00492792  64890d00000000       mov dword ptr fs:[0], ecx
// 00492799  83c468               add esp, 0x68
// 0049279c  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

typedef void (__cdecl *InvalidParameterFunction)();
extern InvalidParameterFunction invalidParameter;

struct Object;

struct Counts {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct BackpackShared {
    Object* object;
    Counts* counts;
    ~BackpackShared();
};

struct Shared {
    Object* object;
    Counts* counts;
    Shared(const BackpackShared&);
    ~Shared();
};

__forceinline Shared::Shared(const BackpackShared& other)
    : object(other.object), counts(other.counts) {
    if (counts)
        _InterlockedExchangeAdd(&counts->strong, 1);
}

__forceinline BackpackShared::~BackpackShared() {
    if (counts) {
        Counts* p = counts;
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

__forceinline Shared::~Shared() {
    if (counts) {
        Counts* p = counts;
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

struct Children {
    unsigned char padding[12];
    Shared* first;
    Shared* last;
};

struct Object {
    unsigned char padding[0x108];
    Children* children;
    void setParent(Object*);
    Shared getOwner();
    unsigned int childCount();
    Object* firstChild();
    void rebuildBackpack();
};

extern bool __cdecl isBackend(Object*, int);
extern BackpackShared __cdecl createBackpack();
extern Object* __cdecl findServiceProvider(Object*);

namespace std {
    struct string {
        unsigned char storage[28];
        string(const char*);
        ~string();
    };

    struct runtime_error {
        unsigned char storage[40];
        runtime_error(const string&);
        runtime_error(const runtime_error&);
        ~runtime_error();
    };
}

typedef void (__thiscall *StringConstructor)(std::string*, const char*);
extern StringConstructor constructString;

__forceinline std::string::string(const char* text) {
    constructString(this, text);
}

void Object::rebuildBackpack() {
    if (!isBackend(this, 1)) {
        std::string message(
            "rebuildBackpack can only be called by the backend server");
        throw std::runtime_error(message);
    }

    Object* child;
    while ((child = firstChild()) != 0)
        child->setParent(0);

    Shared backpack(createBackpack());
    backpack.object->setParent(this);

    Object* provider = findServiceProvider(this);
    if (provider) {
        for (unsigned int i = 0; i < provider->childCount(); ++i) {
            Children* list = provider->children;
            if (i >= static_cast<unsigned int>(list->last - list->first))
                invalidParameter();

            Shared owner(list->first[i].object->getOwner());
            owner.object->setParent(backpack.object);
        }
    }
}
