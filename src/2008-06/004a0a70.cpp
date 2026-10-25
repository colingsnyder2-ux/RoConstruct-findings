// from server: 100% by king_originala
// roc 2008-06 004a0a70  unit: RBX::Network::VClient::?$BoundFuncDesc  size: 534 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a0a70
//
// 004a0a70  6aff                 push -1
// 004a0a72  6893797c00           push 0x7c7993
// 004a0a77  64a100000000         mov eax, dword ptr fs:[0]
// 004a0a7d  50                   push eax
// 004a0a7e  64892500000000       mov dword ptr fs:[0], esp
// 004a0a85  83ec74               sub esp, 0x74
// 004a0a88  56                   push esi
// 004a0a89  8bf1                 mov esi, ecx
// 004a0a8b  89742404             mov dword ptr [esp + 4], esi
// 004a0a8f  8d842488000000       lea eax, [esp + 0x88]
// 004a0a96  686c318200           push 0x82316c
// 004a0a9b  50                   push eax
// 004a0a9c  c784248800000000000000 mov dword ptr [esp + 0x88], 0
// 004a0aa7  ff15cc238000         call dword ptr [0x8023cc]
// 004a0aad  83c408               add esp, 8
// 004a0ab0  84c0                 test al, al
// 004a0ab2  742d                 je 0x4a0ae1
// 004a0ab4  6a07                 push 7
// 004a0ab6  6a00                 push 0
// 004a0ab8  6864318200           push 0x823164
// 004a0abd  8d8c2494000000       lea ecx, [esp + 0x94]
// 004a0ac4  ff15c4248000         call dword ptr [0x8024c4]
// 004a0aca  85c0                 test eax, eax
// 004a0acc  7413                 je 0x4a0ae1
// 004a0ace  6844318200           push 0x823144
// 004a0ad3  6a04                 push 4
// 004a0ad5  e8862cffff           call 0x493760
// 004a0ada  8bc8                 mov ecx, eax
// 004a0adc  e82f8dfeff           call 0x489810
// 004a0ae1  8b8c24a8000000       mov ecx, dword ptr [esp + 0xa8]
// 004a0ae8  6816b78000           push 0x80b716
// 004a0aed  51                   push ecx
// 004a0aee  8d4c2434             lea ecx, [esp + 0x34]
// 004a0af2  e8e98c0000           call 0x4a97e0
// 004a0af7  8b8e40010000         mov ecx, dword ptr [esi + 0x140]
// 004a0afd  8b11                 mov edx, dword ptr [ecx]
// 004a0aff  8b5204               mov edx, dword ptr [edx + 4]
// 004a0b02  6a01                 push 1
// 004a0b04  8d442430             lea eax, [esp + 0x30]
// 004a0b08  50                   push eax
// 004a0b09  8b8424b4000000       mov eax, dword ptr [esp + 0xb4]
// 004a0b10  50                   push eax
// 004a0b11  6a01                 push 1
// 004a0b13  ffd2                 call edx
// 004a0b15  84c0                 test al, al
// 004a0b17  7534                 jne 0x4a0b4d
// 004a0b19  6824318200           push 0x823124
// 004a0b1e  8d4c2414             lea ecx, [esp + 0x14]
// 004a0b22  ff1558248000         call dword ptr [0x802458]
// 004a0b28  8d442410             lea eax, [esp + 0x10]
// 004a0b2c  50                   push eax
// 004a0b2d  8d4c2454             lea ecx, [esp + 0x54]
// 004a0b31  c684248400000001     mov byte ptr [esp + 0x84], 1
// 004a0b39  e81292f6ff           call 0x409d50
// 004a0b3e  68c81b8d00           push 0x8d1bc8
// 004a0b43  8d4c2454             lea ecx, [esp + 0x54]
// 004a0b47  51                   push ecx
// 004a0b48  e83f0a2000           call 0x6a158c
// 004a0b4d  833da00b970010       cmp dword ptr [0x970ba0], 0x10
// 004a0b54  8b8e40010000         mov ecx, dword ptr [esi + 0x140]
// 004a0b5a  8b158c0b9700         mov edx, dword ptr [0x970b8c]
// 004a0b60  7305                 jae 0x4a0b67
// 004a0b62  ba8c0b9700           mov edx, 0x970b8c
// 004a0b67  83bc24a000000010     cmp dword ptr [esp + 0xa0], 0x10
// 004a0b6f  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 004a0b76  7307                 jae 0x4a0b7f
// 004a0b78  8d84248c000000       lea eax, [esp + 0x8c]
// 004a0b7f  8b359c0b9700         mov esi, dword ptr [0x970b9c]
// 004a0b85  55                   push ebp
// 004a0b86  8b29                 mov ebp, dword ptr [ecx]
// 004a0b88  6a00                 push 0
// 004a0b8a  56                   push esi
// 004a0b8b  8bb424b0000000       mov esi, dword ptr [esp + 0xb0]
// 004a0b92  52                   push edx
// 004a0b93  8b5524               mov edx, dword ptr [ebp + 0x24]
// 004a0b96  56                   push esi
// 004a0b97  50                   push eax
// 004a0b98  ffd2                 call edx
// 004a0b9a  5d                   pop ebp
// 004a0b9b  84c0                 test al, al
// 004a0b9d  7534                 jne 0x4a0bd3
// 004a0b9f  6808318200           push 0x823108
// 004a0ba4  8d4c2414             lea ecx, [esp + 0x14]
// 004a0ba8  ff1558248000         call dword ptr [0x802458]
// 004a0bae  8d442410             lea eax, [esp + 0x10]
// 004a0bb2  50                   push eax
// 004a0bb3  8d4c2454             lea ecx, [esp + 0x54]
// 004a0bb7  c684248400000002     mov byte ptr [esp + 0x84], 2
// 004a0bbf  e88c91f6ff           call 0x409d50
// 004a0bc4  68c81b8d00           push 0x8d1bc8
// 004a0bc9  8d4c2454             lea ecx, [esp + 0x54]
// 004a0bcd  51                   push ecx
// 004a0bce  e8b9092000           call 0x6a158c
// 004a0bd3  8d542408             lea edx, [esp + 8]
// 004a0bd7  52                   push edx
// 004a0bd8  e8438a0c00           call 0x569620
// 004a0bdd  83c404               add esp, 4
// 004a0be0  83bc24a000000010     cmp dword ptr [esp + 0xa0], 0x10
// 004a0be8  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 004a0bef  c684248000000003     mov byte ptr [esp + 0x80], 3
// 004a0bf7  7307                 jae 0x4a0c00
// 004a0bf9  8d8c248c000000       lea ecx, [esp + 0x8c]
// 004a0c00  8b00                 mov eax, dword ptr [eax]
// 004a0c02  56                   push esi
// 004a0c03  51                   push ecx
// 004a0c04  68f4308200           push 0x8230f4
// 004a0c09  6a01                 push 1
// 004a0c0b  50                   push eax
// 004a0c0c  e88f870c00           call 0x5693a0
// 004a0c11  8b442420             mov eax, dword ptr [esp + 0x20]
// 004a0c15  83c414               add esp, 0x14
// 004a0c18  c684248000000000     mov byte ptr [esp + 0x80], 0
// 004a0c20  85c0                 test eax, eax
// 004a0c22  742c                 je 0x4a0c50
// 004a0c24  8bf0                 mov esi, eax
// 004a0c26  83c004               add eax, 4
// 004a0c29  83c9ff               or ecx, 0xffffffff
// 004a0c2c  f00fc108             lock xadd dword ptr [eax], ecx
// 004a0c30  751e                 jne 0x4a0c50
// 004a0c32  8b16                 mov edx, dword ptr [esi]
// 004a0c34  8b4204               mov eax, dword ptr [edx + 4]
// 004a0c37  8bce                 mov ecx, esi
// 004a0c39  ffd0                 call eax
// 004a0c3b  8d4e08               lea ecx, [esi + 8]
// 004a0c3e  83caff               or edx, 0xffffffff
// 004a0c41  f00fc111             lock xadd dword ptr [ecx], edx
// 004a0c45  7509                 jne 0x4a0c50
// 004a0c47  8b06                 mov eax, dword ptr [esi]
// 004a0c49  8b5008               mov edx, dword ptr [eax + 8]
// 004a0c4c  8bce                 mov ecx, esi
// 004a0c4e  ffd2                 call edx
// 004a0c50  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004a0c54  e8f7dc0000           call 0x4ae950
// 004a0c59  8d8c2488000000       lea ecx, [esp + 0x88]
// 004a0c60  c7842480000000ffffffff mov dword ptr [esp + 0x80], 0xffffffff
// 004a0c6b  ff1568248000         call dword ptr [0x802468]
// 004a0c71  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 004a0c75  5e                   pop esi
// 004a0c76  64890d00000000       mov dword ptr fs:[0], ecx
// 004a0c7d  81c480000000         add esp, 0x80
// 004a0c83  c22800               ret 0x28

// from server: 76% by EspClaude
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#include <string>
#include <stdexcept>
#include <intrin.h>

class sp_counted_base {
public:
    virtual ~sp_counted_base();
    virtual void dispose() = 0;
    virtual void destroy();
    void release()
    {
        if (_InterlockedDecrement(&use_count_) == 0)
        {
            dispose();
            weak_release();
        }
    }
    void weak_release()
    {
        if (_InterlockedDecrement(&weak_count_) == 0)
            destroy();
    }
    long use_count_;
    long weak_count_;
};

class shared_count {
public:
    sp_counted_base* pi_;
    ~shared_count() { if (pi_ != 0) pi_->release(); }
};

template<class T> class shared_ptr {
public:
    T* px;
    shared_count pn;
    T* operator->() const { return px; }
};

class Logger {
public:
    void log(int level, const char* fmt, ...);
};
shared_ptr<Logger> __cdecl getLogger();

struct SocketDescriptor {
    SocketDescriptor(unsigned short port, const char* hostAddress);
    unsigned short port;
    char hostAddress[32];
};

class RakPeerInterface {
public:
    virtual ~RakPeerInterface();
    virtual bool Startup(unsigned short maxConnections, int threadSleepTimer, SocketDescriptor* socketDescriptors, unsigned socketDescriptorCount);
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual void f8();
    virtual bool Connect(const char* host, unsigned short remotePort, const char* passwordData, int passwordDataLength, unsigned connectionSocketIndex);
};

namespace RBX {
enum MessageType { MESSAGE_OUTPUT, MESSAGE_INFO, MESSAGE_WARNING, MESSAGE_ERROR, MESSAGE_SEVERE };
class StandardOut {
public:
    static StandardOut* singleton();
    void print(MessageType type, const char* message);
};

namespace API {
extern std::string version;
}

namespace Network {
class Client {
public:
    char pad[0x140];
    RakPeerInterface* rakPeer;
    void updateNetworkSimulator();
    void connect(std::string server, int serverPort, int clientPort, int threadSleepTime);
};

void Client::connect(std::string server, int serverPort, int clientPort, int threadSleepTime)
{
    if (server != "localhost" && server.find_first_of("192.168", 0, 7) != 0)
        StandardOut::singleton()->print(MESSAGE_SEVERE, " connect to an extranet game");

    SocketDescriptor d(clientPort, "");
    if (!rakPeer->Startup(1, threadSleepTime, &d, 1))
        throw std::runtime_error("Failed to start network client");

    RakPeerInterface* peer=rakPeer;
    if (!peer->Connect(server.c_str(), serverPort, API::version.c_str(), (int)API::version.size(), 0))
        throw std::runtime_error("Failed to connect to server");

    getLogger()->log(1, "Connecting to %s:%d", server.c_str(), serverPort);

    updateNetworkSimulator();
}
}
}
