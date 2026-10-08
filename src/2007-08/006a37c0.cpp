// from server: 41% by colin
// roc 2007-08 006a37c0  unit: CXTPKeyboardManager  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a37c0

extern "C" void __cdecl sub_62ff20();

struct CXTPKeyboardManager {
    int FindIndex(int value);
    int m_array;  // +4
    int m_count;  // +8
};

int CXTPKeyboardManager::FindIndex(int value) {
    int count = m_count;
    int i = 0;
    if (count > 0) {
        do {
            if (i < 0 || i >= count)
                sub_62ff20();
            if (((int*)m_array)[i] == value)
                return i;
            ++i;
        } while (i < count);
    }
    return -1;
}
