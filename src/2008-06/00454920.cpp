// from server: 71% by colin
// from server: 69% by king_originala
// roc 2008-06 00454920  unit: CRobloxDoc  size: 409 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00454920
//
// 00454920  6aff                 push -1
// 00454922  6891207c00           push 0x7c2091
// 00454927  64a100000000         mov eax, dword ptr fs:[0]
// 0045492d  50                   push eax
// 0045492e  64892500000000       mov dword ptr fs:[0], esp
// 00454935  83ec3c               sub esp, 0x3c
// 00454938  56                   push esi
// 00454939  57                   push edi
// 0045493a  8bf9                 mov edi, ecx
// 0045493c  8b8f94000000         mov ecx, dword ptr [edi + 0x94]
// 00454942  8d442414             lea eax, [esp + 0x14]
// 00454946  50                   push eax
// 00454947  e8f45f0100           call 0x46a940
// 0045494c  8b10                 mov edx, dword ptr [eax]
// 0045494e  83ec08               sub esp, 8
// 00454951  8bcc                 mov ecx, esp
// 00454953  8911                 mov dword ptr [ecx], edx
// 00454955  8b4004               mov eax, dword ptr [eax + 4]
// 00454958  c744245400000000     mov dword ptr [esp + 0x54], 0
// 00454960  89642410             mov dword ptr [esp + 0x10], esp
// 00454964  894104               mov dword ptr [ecx + 4], eax
// 00454967  85c0                 test eax, eax
// 00454969  740c                 je 0x454977
// 0045496b  83c004               add eax, 4
// 0045496e  b901000000           mov ecx, 1
// 00454973  f00fc108             lock xadd dword ptr [eax], ecx
// 00454977  8d4c2424             lea ecx, [esp + 0x24]
// 0045497b  e8c0d1fbff           call 0x411b40
// 00454980  8b742418             mov esi, dword ptr [esp + 0x18]
// 00454984  c644244c02           mov byte ptr [esp + 0x4c], 2
// 00454989  85f6                 test esi, esi
// 0045498b  742a                 je 0x4549b7
// 0045498d  8d5604               lea edx, [esi + 4]
// 00454990  83c8ff               or eax, 0xffffffff
// 00454993  f00fc102             lock xadd dword ptr [edx], eax
// 00454997  751e                 jne 0x4549b7
// 00454999  8b16                 mov edx, dword ptr [esi]
// 0045499b  8b4204               mov eax, dword ptr [edx + 4]
// 0045499e  8bce                 mov ecx, esi
// 004549a0  ffd0                 call eax
// 004549a2  8d4e08               lea ecx, [esi + 8]
// 004549a5  83caff               or edx, 0xffffffff
// 004549a8  f00fc111             lock xadd dword ptr [ecx], edx
// 004549ac  7509                 jne 0x4549b7
// 004549ae  8b06                 mov eax, dword ptr [esi]
// 004549b0  8b5008               mov edx, dword ptr [eax + 8]
// 004549b3  8bce                 mov ecx, esi
// 004549b5  ffd2                 call edx
// 004549b7  8d44240c             lea eax, [esp + 0xc]
// 004549bb  50                   push eax
// 004549bc  8bcf                 mov ecx, edi
// 004549be  e87de6faff           call 0x403040
// 004549c3  8b08                 mov ecx, dword ptr [eax]
// 004549c5  c644244c03           mov byte ptr [esp + 0x4c], 3
// 004549ca  85c9                 test ecx, ecx
// 004549cc  7409                 je 0x4549d7
// 004549ce  e8bd94fdff           call 0x42de90
// 004549d3  8bf8                 mov edi, eax
// 004549d5  eb02                 jmp 0x4549d9
// 004549d7  33ff                 xor edi, edi
// 004549d9  8b742410             mov esi, dword ptr [esp + 0x10]
// 004549dd  c644244c02           mov byte ptr [esp + 0x4c], 2
// 004549e2  85f6                 test esi, esi
// 004549e4  742a                 je 0x454a10
// 004549e6  8d4e04               lea ecx, [esi + 4]
// 004549e9  83caff               or edx, 0xffffffff
// 004549ec  f00fc111             lock xadd dword ptr [ecx], edx
// 004549f0  751e                 jne 0x454a10
// 004549f2  8b06                 mov eax, dword ptr [esi]
// 004549f4  8b5004               mov edx, dword ptr [eax + 4]
// 004549f7  8bce                 mov ecx, esi
// 004549f9  ffd2                 call edx
// 004549fb  8d4608               lea eax, [esi + 8]
// 004549fe  83c9ff               or ecx, 0xffffffff
// 00454a01  f00fc108             lock xadd dword ptr [eax], ecx
// 00454a05  7509                 jne 0x454a10
// 00454a07  8b16                 mov edx, dword ptr [esi]
// 00454a09  8b4208               mov eax, dword ptr [edx + 8]
// 00454a0c  8bce                 mov ecx, esi
// 00454a0e  ffd0                 call eax
// 00454a10  85ff                 test edi, edi
// 00454a12  7465                 je 0x454a79
// 00454a14  8b8ff0010000         mov ecx, dword ptr [edi + 0x1f0]
// 00454a1a  85c9                 test ecx, ecx
// 00454a1c  745b                 je 0x454a79
// 00454a1e  8d54240c             lea edx, [esp + 0xc]
// 00454a22  52                   push edx
// 00454a23  8d44240c             lea eax, [esp + 0xc]
// 00454a27  50                   push eax
// 00454a28  e8133f1700           call 0x5c8940
// 00454a2d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00454a31  51                   push ecx
// 00454a32  8d54242c             lea edx, [esp + 0x2c]
// 00454a36  52                   push edx
// 00454a37  e884211500           call 0x5a6bc0
// 00454a3c  83c408               add esp, 8
// 00454a3f  8b742454             mov esi, dword ptr [esp + 0x54]
// 00454a43  8b3e                 mov edi, dword ptr [esi]
// 00454a45  8d4c2428             lea ecx, [esp + 0x28]
// 00454a49  c644244c04           mov byte ptr [esp + 0x4c], 4
// 00454a4e  83c70c               add edi, 0xc
// 00454a51  ff1564248000         call dword ptr [0x802464]
// 00454a57  50                   push eax
// 00454a58  8b07                 mov eax, dword ptr [edi]
// 00454a5a  8bce                 mov ecx, esi
// 00454a5c  ffd0                 call eax
// 00454a5e  8b16                 mov edx, dword ptr [esi]
// 00454a60  8b02                 mov eax, dword ptr [edx]
// 00454a62  6a01                 push 1
// 00454a64  8bce                 mov ecx, esi
// 00454a66  ffd0                 call eax
// 00454a68  8d4c2428             lea ecx, [esp + 0x28]
// 00454a6c  c644244c02           mov byte ptr [esp + 0x4c], 2
// 00454a71  ff1568248000         call dword ptr [0x802468]
// 00454a77  eb1c                 jmp 0x454a95
// 00454a79  8b742454             mov esi, dword ptr [esp + 0x54]
// 00454a7d  8b16                 mov edx, dword ptr [esi]
// 00454a7f  8b420c               mov eax, dword ptr [edx + 0xc]
// 00454a82  6816b78000           push 0x80b716
// 00454a87  8bce                 mov ecx, esi
// 00454a89  ffd0                 call eax
// 00454a8b  8b16                 mov edx, dword ptr [esi]
// 00454a8d  8b02                 mov eax, dword ptr [edx]
// 00454a8f  6a00                 push 0
// 00454a91  8bce                 mov ecx, esi
// 00454a93  ffd0                 call eax
// 00454a95  8d4c241c             lea ecx, [esp + 0x1c]
// 00454a99  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 00454aa1  e81a291200           call 0x5773c0
// 00454aa6  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00454aaa  5f                   pop edi
// 00454aab  64890d00000000       mov dword ptr fs:[0], ecx
// 00454ab2  5e                   pop esi
// 00454ab3  83c448               add esp, 0x48
// 00454ab6  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCount
{
    virtual void reserved() = 0;
    virtual void destroy() = 0;
    virtual void release() = 0;
    volatile long strong;
    volatile long weak;
};

struct Model;
struct Context;

template<class T> struct Shared
{
    T* object;
    RefCount* count;

    Shared();
    Shared(const Shared& other);
    ~Shared();
};

template<class T>
Shared<T>::Shared()
{
}

template<class T>
Shared<T>::Shared(const Shared& other)
    : object(other.object), count(other.count)
{
    if (count)
        _InterlockedExchangeAdd(&count->strong, 1);
}

template<class T>
Shared<T>::~Shared()
{
    RefCount* p = count;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 0)
    {
        p->destroy();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
            p->release();
    }
}

struct Source
{
    Shared<Model>* getModel(const Shared<Model>& result);
};

struct Lock
{
    char storage[12];
    Lock(Shared<Model> model);
    ~Lock();
};

struct Model
{
    Context* getContext();
};

struct Authoring
{
    void getValues(int* first, int* second);
};

struct Context
{
    char padding[0x1f0];
    Authoring* authoring;
};

namespace std
{
    template<class T> struct char_traits;
    template<class T> struct allocator;

    template<class T, class Traits, class Allocator> struct basic_string
    {
        char storage[28];
        __declspec(dllimport) ~basic_string() throw();
        const T* c_str() const;
    };
}

typedef std::basic_string<char, std::char_traits<char>, std::allocator<char> > String;

String __cdecl formatValue(int value);

struct Result
{
    virtual void setSuccess(int success) = 0;
    virtual void reserved1() = 0;
    virtual void reserved2() = 0;
    virtual void setText(const char* text) = 0;
};

struct CRobloxDoc
{
    char padding[0x94];
    Source* source;

    Shared<Model>* getModel(const Shared<Model>& result);
    void authoring(Result* result);
};

void CRobloxDoc::authoring(Result* result)
{
    Lock lock(*source->getModel(Shared<Model>()));

    Model* model = getModel(Shared<Model>())->object;
    Context* context = model ? model->getContext() : 0;

    if (context && context->authoring)
    {
        int first;
        int second;
        context->authoring->getValues(&first, &second);
        String text = formatValue(first);
        result->setText(text.c_str());
        result->setSuccess(1);
    }
    else
    {
        result->setText(">Authoring");
        result->setSuccess(0);
    }
}
