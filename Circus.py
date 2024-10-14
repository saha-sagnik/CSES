MOD = 10**9 + 7

def solve(k, weights):
    weights.sort()
    left, right = 0, len(weights) - 1
    trips = 0

    while left <= right:
        # Try to pair the heaviest person with the lightest
        if weights[left] + weights[right] <= k:
            left += 1  # Pairing the lightest
        right -= 1  # Always take the heaviest
        trips += 1  # Count the trip

    # For now, we return 1 for number of ways (this can be adjusted later)
    ways = 1

    return trips, ways

# Example input
k = int(input())
n = int(input())
weights = list(map(int, input().split()))

# Solve the problem
trips, ways = solve(k, weights)
print(trips, ways)
