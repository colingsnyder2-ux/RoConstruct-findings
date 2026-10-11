// from server: 29% by colin
struct SoundService {
    bool __cdecl findService(void* out);
};

bool SoundService::findService(void* out) {
    if (*(void**)((char*)this + 0x14) != 0) {
        *(void**)out = ((void* (*)(void*))0x5be240)(this);
        return true;
    }
    return false;
}
