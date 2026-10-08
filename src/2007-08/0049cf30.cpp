// from server: 37% by colin
// roc 2007-08 0049cf30  unit: RBX::Network::Server::ClientProxy  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0049cf30
//
// 0049cf30  51                   push ecx
// 0049cf31  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0049cf35  33c0                 xor eax, eax
// 0049cf37  890424               mov dword ptr [esp], eax
// 0049cf3a  56                   push esi
// 0049cf3b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0049cf3f  88442404             mov byte ptr [esp + 4], al
// 0049cf43  8b442404             mov eax, dword ptr [esp + 4]
// 0049cf47  50                   push eax
// 0049cf48  51                   push ecx
// 0049cf49  8bce                 mov ecx, esi
// 0049cf4b  e830faffff           call 0x49c980
// 0049cf50  8bc6                 mov eax, esi
// 0049cf52  5e                   pop esi
// 0049cf53  59                   pop ecx
// 0049cf54  c3                   ret 

struct ClientProxy {
    void sendData(int, char);
    ClientProxy* init(int, char);
};

ClientProxy* ClientProxy::init(int a, char b)
{
    char local = 0;
    sendData(a, local);
    return this;
}
