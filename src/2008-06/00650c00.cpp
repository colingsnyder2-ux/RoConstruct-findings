// from server: 74% by colin
// from server: 71% by king_originala
// roc 2008-06 00650c00  unit: RBX::ChatOutput  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00650c00
//
// 00650c00  56                   push esi
// 00650c01  8bf1                 mov esi, ecx
// 00650c03  85f6                 test esi, esi
// 00650c05  7408                 je 0x650c0f
// 00650c07  8d8e48010000         lea ecx, [esi + 0x148]
// 00650c0d  eb02                 jmp 0x650c11
// 00650c0f  33c9                 xor ecx, ecx
// 00650c11  8b864c010000         mov eax, dword ptr [esi + 0x14c]
// 00650c17  85c0                 test eax, eax
// 00650c19  740c                 je 0x650c27
// 00650c1b  51                   push ecx
// 00650c1c  8d8830010000         lea ecx, [eax + 0x130]
// 00650c22  e8594ef9ff           call 0x5e5a80
// 00650c27  85f6                 test esi, esi
// 00650c29  7408                 je 0x650c33
// 00650c2b  8d8e44010000         lea ecx, [esi + 0x144]
// 00650c31  eb02                 jmp 0x650c35
// 00650c33  33c9                 xor ecx, ecx
// 00650c35  8b8650010000         mov eax, dword ptr [esi + 0x150]
// 00650c3b  85c0                 test eax, eax
// 00650c3d  740c                 je 0x650c4b
// 00650c3f  51                   push ecx
// 00650c40  8d8830010000         lea ecx, [eax + 0x130]
// 00650c46  e8354ef9ff           call 0x5e5a80
// 00650c4b  57                   push edi
// 00650c4c  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00650c50  85ff                 test edi, edi
// 00650c52  7409                 je 0x650c5d
// 00650c54  8bcf                 mov ecx, edi
// 00650c56  e89524e0ff           call 0x4530f0
// 00650c5b  eb02                 jmp 0x650c5f
// 00650c5d  33c0                 xor eax, eax
// 00650c5f  89864c010000         mov dword ptr [esi + 0x14c], eax
// 00650c65  85ff                 test edi, edi
// 00650c67  7409                 je 0x650c72
// 00650c69  8bcf                 mov ecx, edi
// 00650c6b  e8a01adcff           call 0x412710
// 00650c70  eb02                 jmp 0x650c74
// 00650c72  33c0                 xor eax, eax
// 00650c74  898650010000         mov dword ptr [esi + 0x150], eax
// 00650c7a  8b864c010000         mov eax, dword ptr [esi + 0x14c]
// 00650c80  8d8e48010000         lea ecx, [esi + 0x148]
// 00650c86  5f                   pop edi
// 00650c87  85c0                 test eax, eax
// 00650c89  740c                 je 0x650c97
// 00650c8b  51                   push ecx
// 00650c8c  8d8830010000         lea ecx, [eax + 0x130]
// 00650c92  e8090cddff           call 0x4218a0
// 00650c97  8d8644010000         lea eax, [esi + 0x144]
// 00650c9d  8bb650010000         mov esi, dword ptr [esi + 0x150]
// 00650ca3  85f6                 test esi, esi
// 00650ca5  740c                 je 0x650cb3
// 00650ca7  50                   push eax
// 00650ca8  8d8e30010000         lea ecx, [esi + 0x130]
// 00650cae  e8ed0bddff           call 0x4218a0
// 00650cb3  5e                   pop esi
// 00650cb4  c20800               ret 8
#include <intrin.h>

struct Listener {
    void *value;
};

struct FirstListener : Listener {};
struct SecondListener : Listener {};

struct Padding {
    char bytes[0x144];
};

struct Signal {
    void disconnect(Listener *);
    void connect(Listener *);
};

struct Endpoint {
    char padding[0x130];
    Signal signal;
};

struct Source {
    Endpoint *first();
    Endpoint *second();
};

struct S : Padding, SecondListener, FirstListener {
    Endpoint *firstEndpoint;
    Endpoint *secondEndpoint;

    void update(void *, Source *);
};

void S::update(void *, Source *source)
{
    Listener *listener = static_cast<FirstListener *>(this);
    if (firstEndpoint)
        firstEndpoint->signal.disconnect(listener);

    listener = static_cast<SecondListener *>(this);
    _ReadWriteBarrier();
    if (secondEndpoint)
        secondEndpoint->signal.disconnect(listener);

    firstEndpoint = source ? source->first() : 0;
    secondEndpoint = source ? source->second() : 0;

    listener = &static_cast<FirstListener &>(*this);
    if (firstEndpoint)
        firstEndpoint->signal.connect(listener);

    listener = &static_cast<SecondListener &>(*this);
    if (secondEndpoint)
        secondEndpoint->signal.connect(listener);
}
