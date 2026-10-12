// from server: 83% by king_originala
struct Vector {
    float x, y, z;
};

struct S {
    Vector axis(int index) const;
    void project(const S* reference, const Vector& direction,
                 float& minimum, float& maximum) const;
};

bool __cdecl contains(const S* first, const S* second, float margin)
{
    for (int i = 0; i < 2; ++i) {
        Vector direction = first->axis(i);
        float firstMinimum, firstMaximum;
        float secondMinimum, secondMaximum;

        first->project(first, direction, firstMinimum, firstMaximum);
        second->project(first, direction, secondMinimum, secondMaximum);

        if (!(secondMaximum - margin >= firstMinimum))
            return false;
        if (secondMinimum + margin > firstMaximum)
            return false;
    }
    return true;
}
