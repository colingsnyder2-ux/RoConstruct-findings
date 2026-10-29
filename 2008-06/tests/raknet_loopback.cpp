#include "force_verified.h"
// Runtime test for the rebuilt RakNet 3.0 library: two peers connect over loopback,
// the client sends one reliable user packet and the server must receive it intact.
#include "RakNetworkFactory.h"
#include "RakPeerInterface.h"
#include "MessageIdentifiers.h"
#include "RakNetTypes.h"
#include "BitStream.h"
#include <math.h>
#include <windows.h>
#include <stdio.h>
#include <string.h>

extern template void RakNet::BitStream::WriteNormQuat<float>(float, float, float, float);
extern template void RakNet::BitStream::WriteVector<float>(float, float, float);
extern template bool RakNet::BitStream::ReadVector<float>(float&, float&, float&);

static bool geometry()
{
    RakNet::BitStream vector;
    vector.WriteVector<float>(3.0f, -4.0f, 12.0f);
    if (vector.GetNumberOfBitsUsed() != 80) return false;
    float x=0, y=0, z=0;
    if (!vector.ReadVector<float>(x,y,z) || fabs(x-3)>0.002 || fabs(y+4)>0.002 || fabs(z-12)>0.002) return false;
    if (vector.ReadVector<float>(x,y,z)) return false;
    RakNet::BitStream zero;
    zero.WriteVector<float>(0,0,0);
    if (zero.GetNumberOfBitsUsed()!=32 || !zero.ReadVector<float>(x,y,z) || x || y || z) return false;
    RakNet::BitStream quat;
    quat.WriteNormQuat<float>(-0.5f,0.5f,-0.5f,0.5f);
    float w=0;
    if (quat.GetNumberOfBitsUsed()!=52 || !quat.ReadNormQuat<float>(w,x,y,z)) return false;
    if (fabs(w+0.5)>0.0002 || fabs(x-0.5)>0.0002 || fabs(y+0.5)>0.0002 || fabs(z-0.5)>0.0002) return false;
    RakNet::BitStream compressed;
    compressed.WriteVector<float>(0,0.6f,-0.8f);
    if (!compressed.Read(x) || fabs(x-1)>0.00001) return false;
    const float values[]={0,0.6f,-0.8f};
    for (int i=0;i<3;++i) if (!compressed.ReadCompressed<float>(x) || fabs(x-values[i])>0.00004) return false;
    return true;
}

int main()
{
    if (!geometry()) return printf("geometry failed\n"), 5;
    printf("native float vector/quaternion/compression passed\n");
    RakPeerInterface* server = RakNetworkFactory::GetRakPeerInterface();
    RakPeerInterface* client = RakNetworkFactory::GetRakPeerInterface();
    SocketDescriptor serverSocket(0, "127.0.0.1"), clientSocket(0, "127.0.0.1");
    if (!server->Startup(4, 0, &serverSocket, 1) || !client->Startup(1, 0, &clientSocket, 1))
        return printf("startup failed\n"), 2;
    server->SetMaximumIncomingConnections(4);
    if (!client->Connect("127.0.0.1", server->GetInternalID().port, 0, 0))
        return printf("connect call failed\n"), 3;

    const char message[] = { (char)ID_USER_PACKET_ENUM, 'r', 'o', 'c', '2', '0', '0', '8' };
    static char large[50321];
    for (int i=0;i<sizeof(large);++i) large[i]=(char)(i*17+11);
    large[0]=(char)(ID_USER_PACKET_ENUM+1);
    char tail[]={(char)(ID_USER_PACKET_ENUM+2), 'o', 'k'};
    bool connected = false, received = false, malformed = false;
    int delivered=0;
    for (int tick = 0; tick < 1000 && !received && !malformed; ++tick)
    {
        for (Packet* p = client->Receive(); p; client->DeallocatePacket(p), p = client->Receive())
            if (p->data[0] == ID_CONNECTION_REQUEST_ACCEPTED)
            {
                connected = true;
                client->Send(message, sizeof(message), HIGH_PRIORITY, RELIABLE_ORDERED, 0, p->systemAddress, false);
                client->Send(large, sizeof(large), HIGH_PRIORITY, RELIABLE_ORDERED, 0, p->systemAddress, false);
                client->Send(tail, sizeof(tail), HIGH_PRIORITY, RELIABLE_ORDERED, 0, p->systemAddress, false);
            }
        for (Packet* p = server->Receive(); p; server->DeallocatePacket(p), p = server->Receive())
            if (p->data[0] >= ID_USER_PACKET_ENUM) {
                const char* expected=delivered==0 ? message : delivered==1 ? large : tail;
                unsigned size=delivered==0 ? sizeof(message) : delivered==1 ? sizeof(large) : sizeof(tail);
                if (delivered>=3 || p->length!=size || memcmp(p->data,expected,size)) malformed=true;
                else if (++delivered==3) received=true;
            }
        Sleep(10);
    }
    client->Shutdown(100);
    server->Shutdown(100);
    RakNetworkFactory::DestroyRakPeerInterface(client);
    RakNetworkFactory::DestroyRakPeerInterface(server);
    printf("connected=%d received=%d ordered=%d fragmented=%u malformed=%d\n", connected, received, delivered, (unsigned)sizeof(large), malformed);
    return connected && received && !malformed ? 0 : 1;
}
