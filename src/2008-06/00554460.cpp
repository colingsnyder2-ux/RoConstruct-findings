// from server: 100% by tester
// roc 2008-06 00554460  unit: RBX::RunService  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00554460
//
// 00554460  8b897c020000         mov ecx, dword ptr [ecx + 0x27c]
// 00554466  85c9                 test ecx, ecx
// 00554468  7405                 je 0x55446f
// 0055446a  e9e1230500           jmp 0x5a6850
// 0055446f  c3                   ret 

struct Workspace { void stop(); };

struct RunService {
    char pad[0x27c];
    Workspace* workspace;
    void stop();
};

void RunService::stop()
{
    if (workspace)
        workspace->stop();
}
