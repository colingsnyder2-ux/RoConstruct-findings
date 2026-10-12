// from server: 80% by king_originala
struct Edge {
    char padding[12];
    void* first;
    void* second;
};

extern float __cdecl getValue(void*);

template<class T>
inline const T& maximum(const T& left, const T& right)
{
    return left < right ? right : left;
}

int __cdecl compareEdges(const Edge* left, const Edge* right)
{
    float leftValue = getValue(left->first);
    if (left->second) {
        float value = getValue(left->second);
        leftValue = maximum(leftValue, value);
    }

    float rightValue = getValue(right->first);
    if (right->second) {
        float value = getValue(right->second);
        rightValue = maximum(rightValue, value);
    }

    if (rightValue < leftValue)
        return 1;
    if (rightValue > leftValue)
        return -1;
    return 0;
}
