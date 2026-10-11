// from server: 66% by tester
struct VPartInstance {
    void setFilteredSelection(bool value);
};

extern "C" void __stdcall notifyFilteredSelectionChanged(void*);

void VPartInstance::setFilteredSelection(bool value)
{
    unsigned char* self = (unsigned char*)this;
    unsigned char old = self[0x1e8];
    unsigned char dl = (unsigned char)value;
    unsigned char bl = old & 1;
    if (bl != dl) {
        bl = old;
        bl ^= dl;
        bl &= 1;
        bl ^= old;
        self[0x1e8] = bl;
        notifyFilteredSelectionChanged((void*)0x97a26c);
    }
}
