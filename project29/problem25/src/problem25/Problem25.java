
package problem25;

import java.util.HashSet;
import java.util.Set;

/**
 *
 * @author Josh Wretlind
 */
public class Problem25 {

    public int calculateUniquePowerCombinations(){
        Set<Double> foundCombinations = new HashSet<Double>();
        
        for(int i = 2; i <= 100; i++){
            for(int j = 2; j <= 100; j++){
                double power = Math.pow(i,j);
                if(!foundCombinations.contains(power)){
                    foundCombinations.add(power);
                }
            }
        }
        
        return foundCombinations.size();
    }
    
    public static void main(String[] args) {
        Problem25 app = new Problem25();
        System.out.println(app.calculateUniquePowerCombinations());
    }
}
