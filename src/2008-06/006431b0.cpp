// from server: 100% by king_originala
// roc 2008-06 006431b0  unit: RBX::ScriptMouseCommand  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006431b0
//
// 006431b0  56                   push esi
// 006431b1  8bf1                 mov esi, ecx
// 006431b3  8b4e08               mov ecx, dword ptr [esi + 8]
// 006431b6  85c9                 test ecx, ecx
// 006431b8  0f84b1000000         je 0x64326f
// 006431be  53                   push ebx
// 006431bf  e84c58f9ff           call 0x5d8a10
// 006431c4  8a5c240c             mov bl, byte ptr [esp + 0xc]
// 006431c8  85c0                 test eax, eax
// 006431ca  7411                 je 0x6431dd
// 006431cc  8b4e08               mov ecx, dword ptr [esi + 8]
// 006431cf  e83c58f9ff           call 0x5d8a10
// 006431d4  8b80c8020000         mov eax, dword ptr [eax + 0x2c8]
// 006431da  885830               mov byte ptr [eax + 0x30], bl
// 006431dd  8b4e08               mov ecx, dword ptr [esi + 8]
// 006431e0  e82b59f9ff           call 0x5d8b10
// 006431e5  85c0                 test eax, eax
// 006431e7  7411                 je 0x6431fa
// 006431e9  8b4e08               mov ecx, dword ptr [esi + 8]
// 006431ec  e81f59f9ff           call 0x5d8b10
// 006431f1  8b88c8020000         mov ecx, dword ptr [eax + 0x2c8]
// 006431f7  885930               mov byte ptr [ecx + 0x30], bl
// 006431fa  8b4e08               mov ecx, dword ptr [esi + 8]
// 006431fd  e80e5df9ff           call 0x5d8f10
// 00643202  85c0                 test eax, eax
// 00643204  7411                 je 0x643217
// 00643206  8b4e08               mov ecx, dword ptr [esi + 8]
// 00643209  e8025df9ff           call 0x5d8f10
// 0064320e  8b90c8020000         mov edx, dword ptr [eax + 0x2c8]
// 00643214  885a30               mov byte ptr [edx + 0x30], bl
// 00643217  8b4e08               mov ecx, dword ptr [esi + 8]
// 0064321a  e8f15bf9ff           call 0x5d8e10
// 0064321f  85c0                 test eax, eax
// 00643221  7411                 je 0x643234
// 00643223  8b4e08               mov ecx, dword ptr [esi + 8]
// 00643226  e8e55bf9ff           call 0x5d8e10
// 0064322b  8b80c8020000         mov eax, dword ptr [eax + 0x2c8]
// 00643231  885830               mov byte ptr [eax + 0x30], bl
// 00643234  8b4e08               mov ecx, dword ptr [esi + 8]
// 00643237  e8d45af9ff           call 0x5d8d10
// 0064323c  85c0                 test eax, eax
// 0064323e  7411                 je 0x643251
// 00643240  8b4e08               mov ecx, dword ptr [esi + 8]
// 00643243  e8c85af9ff           call 0x5d8d10
// 00643248  8b88c8020000         mov ecx, dword ptr [eax + 0x2c8]
// 0064324e  885930               mov byte ptr [ecx + 0x30], bl
// 00643251  8b4e08               mov ecx, dword ptr [esi + 8]
// 00643254  e8b759f9ff           call 0x5d8c10
// 00643259  85c0                 test eax, eax
// 0064325b  7411                 je 0x64326e
// 0064325d  8b4e08               mov ecx, dword ptr [esi + 8]
// 00643260  e8ab59f9ff           call 0x5d8c10
// 00643265  8b90c8020000         mov edx, dword ptr [eax + 0x2c8]
// 0064326b  885a30               mov byte ptr [edx + 0x30], bl
// 0064326e  5b                   pop ebx
// 0064326f  5e                   pop esi
// 00643270  c20400               ret 4

struct State {
    char pad[48];
    bool enabled;
};

struct Object {
    char pad[712];
    State* state;
};

struct Provider {
    Object* getA();
    Object* getB();
    Object* getC();
    Object* getD();
    Object* getE();
    Object* getF();
};

struct ScriptMouseCommand {
    char pad[8];
    Provider* provider;
    void f(bool enabled);
};

void ScriptMouseCommand::f(bool enabled)
{
    if (provider) {
        if (provider->getA())
            provider->getA()->state->enabled = enabled;
        if (provider->getB())
            provider->getB()->state->enabled = enabled;
        if (provider->getF())
            provider->getF()->state->enabled = enabled;
        if (provider->getE())
            provider->getE()->state->enabled = enabled;
        if (provider->getD())
            provider->getD()->state->enabled = enabled;
        if (provider->getC())
            provider->getC()->state->enabled = enabled;
    }
}
