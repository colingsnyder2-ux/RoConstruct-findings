// from server: 64% by colin
// roc 2007-08 00493790  unit: RBX::Network::VPlayers::Notifier  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00493790

struct Notifier {
    void assign(void* first, void* last, void* out, void* fn, void* arg);
};

void Notifier::assign(void* first, void* last, void* out, void* fn, void* arg)
{
    void* cur = first;
    while (cur != last) {
        ((void (__cdecl*)(void*, void*))fn)((char*)cur + 8, arg);
        cur = *(void**)cur;
    }
    *(void**)out = fn;
    *((void**)out + 1) = arg;
    *((void**)out + 2) = last;
}
